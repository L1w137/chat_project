#include "Registerdialog.h"
#include "ui_Registerdialog.h"
#include"global.h"
#include"httpmgr.h"
Register_Dialog::Register_Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Register_Dialog)
{
    ui->setupUi(this);
    ui->pwd_lineEdit->setEchoMode(QLineEdit::Password);
    ui->comfirm_lineEdit->setEchoMode(QLineEdit::Password);
    ui->erro_tip->setProperty("state","normal");
    repolish(ui->erro_tip);
    connect(HttpMgr::GetInstance().get(),&HttpMgr::sig_reg_mod_finish,this,
            &Register_Dialog::slot_reg_mod_finish);
    initHttpHandlers();
}

Register_Dialog::~Register_Dialog()
{
    delete ui;
}

void Register_Dialog::on_v_code_pushButton_clicked()
{
    auto email = ui->email_label->text();
    QRegularExpression regex(R"((\w+)(\.|_)?(\w*)@(\w+)(\.(\w+))+)");
    bool match =regex.match(email).hasMatch();
    if(match){
        //发送验证码
    }else{
        showTip(tr("邮箱格式错误"),false);
    }
}

void Register_Dialog::slot_reg_mod_finish(ReqId id, QString res, ErrorCodes err)
{
    if(err != ErrorCodes::SUCCESS){
        showTip(tr("网络请求错误"),false);
        return;
    }
    //解析json
    QJsonDocument jsonDoc = QJsonDocument::fromJson(res.toUtf8());
    if(jsonDoc.isNull()){
        showTip(tr("json解析失败"),false);
        return;
    }
    if(!jsonDoc.isObject()){
        showTip(tr("json解析失败"),false);
        return;
    }
    //json文档转为json对象
    _handlers[id](jsonDoc.object());
    return;
}

void Register_Dialog::initHttpHandlers()
{
    //注册获取验证码的回包
    _handlers.insert(ReqId::ID_GET_VARIFY_CODE,[this](const QJsonObject& jsonObj){
        int error = jsonObj["error"].toInt();
        if(error != ErrorCodes::SUCCESS){
            showTip(tr("参数错误"),false);
            return;
        }
        auto email = jsonObj["email"].toString();
        showTip(tr("验证码已经发送到邮箱"),true);
        qDebug()<<"email is "<<email;
    });
}

void Register_Dialog::showTip(QString str,bool flag)
{
    if(flag){
        ui->erro_tip->setProperty("state","normal");

    }else{
        ui->erro_tip->setProperty("state","err");
         ui->erro_tip->setText(str);
    }
          repolish(ui->erro_tip);
}

