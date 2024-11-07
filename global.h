#ifndef GLOBAL_H
#define GLOBAL_H
#include<QWidget>
#include<functional>
#include"QStyle"
#include<QRegularExpression>
#include<memory>
#include<iostream>
#include<mutex>
#include<QString>
#include<QUrl>
#include<QObject>
#include<QNetworkAccessManager>
#include<QJsonObject>
#include<QJsonDocument>
#include<QNetworkReply>
extern std::function<void(QWidget*)> repolish;

enum ReqId{
    ID_GET_VARIFY_CODE = 1001,
    ID_REG_USER = 1002,
};

enum Modules{
        REGISTERMOD = 0,
};
enum ErrorCodes{
    SUCCESS = 0,
    ERR_JOSN = 1,
    ERR_NETWORK = 2
};

#endif // GLOBAL_H
