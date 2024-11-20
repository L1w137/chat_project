#pragma once
#include"const.h"

class CServer:public std::enable_shared_from_this<CServer>
{
public:
	CServer(boost::asio::io_context& ioc, unsigned short& port);//���������캯��
	void Start();
private:
	tcp::acceptor _acceptor;//�����������ܶԶ˵����ӣ���Ҫ�͵ײ���¼�ѭ��ͨ�ţ���io_context��Ϊý��͵ײ�ͨ��

	/*���ó�Ա_ioc�����ڰ��ⲿ��io_context����is_context�����ڿ������죩
	һ�� io_context ʵ�������������첽����
	��CServer �಻���� ioc ����������*/
	net::io_context& _ioc;
	boost::asio::ip::tcp::socket _socket;
};