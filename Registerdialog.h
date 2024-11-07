#ifndef REGISTERDIALOG_H
#define REGISTERDIALOG_H

#include <QDialog>
#include"global.h"
namespace Ui {
class Register_Dialog;
}

class Register_Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Register_Dialog(QWidget *parent = nullptr);
    ~Register_Dialog();

private slots:
    void on_v_code_pushButton_clicked();
    void slot_reg_mod_finish(ReqId id,QString res,ErrorCodes err);

private:
    void initHttpHandlers();
    QMap<ReqId,std::function<void(const QJsonObject&)>> _handlers;
    Ui::Register_Dialog *ui;
    void showTip(QString str,bool flag);
};

#endif // REGISTERDIALOG_H
