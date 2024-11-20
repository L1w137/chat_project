#pragma once
#include"const.h"

class CServer:public std::enable_shared_from_this<CServer>
{
public:
	CServer(boost::asio::io_context& ioc, unsigned short& port);//服务器构造函数
	void Start();
private:
	tcp::acceptor _acceptor;//接受器，接受对端的链接，需要和底层的事件循环通信，绑定io_context作为媒介和底层通信

	/*引用成员_ioc，用于绑定外部的io_context对象（is_context不存在拷贝构造）
	一个 io_context 实例来处理所有异步任务
	而CServer 类不负责 ioc 的生命周期*/
	net::io_context& _ioc;
	boost::asio::ip::tcp::socket _socket;
};