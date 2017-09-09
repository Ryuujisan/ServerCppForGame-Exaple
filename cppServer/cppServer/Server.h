#pragma once
class Server
{
private:


	SOCKADDR_IN adres;
	SOCKET socketListen;

	std::string ip;
	short port;
	int addrlen;


public:

	void Init();
	void Run();

	Server();
	~Server();
};

