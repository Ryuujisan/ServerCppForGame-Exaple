#pragma once
#include "stdafx.h"
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

	static Server * getInstance();


	Server();
	~Server();
	
};

