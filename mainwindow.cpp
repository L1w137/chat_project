#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    _login_dlg =new LoginDialog(this);
    setCentralWidget(_login_dlg);
   // _login_dlg->show();
    //创建注册消息连接
    connect(_login_dlg,&LoginDialog::switchRegister,this,&MainWindow::slotSwitchReg);
    _reg_dlg =new Register_Dialog(this);
    //绑定主窗口和注册/登录窗口
    _login_dlg->setWindowFlags(Qt::CustomizeWindowHint|Qt::FramelessWindowHint);
    _reg_dlg->setWindowFlags(Qt::CustomizeWindowHint|Qt::FramelessWindowHint);
    _reg_dlg->hide();

}

MainWindow::~MainWindow()
{
    delete ui;

}
void MainWindow::slotSwitchReg(){
    setCentralWidget(_reg_dlg);
    _login_dlg->hide();
    _reg_dlg->show();
}
