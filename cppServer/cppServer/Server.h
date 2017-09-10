#pragma once
#include "stdafx.h"
#include "RoomMenager.h"
#include "ClientMenager.h"


class Server
{
	friend class RoomMenager;
	//friend class ClientMenager;
private:	
	SOCKADDR_IN adres;
	SOCKET socketListen;

	RoomMenager* roomMenager;
	ClientMenager* clientMenager;

	std::string ip;
	short port;
	int addrlen;


public:

	void Init();
	void Run();

	static Server * getInstance();
	RoomMenager* getRoomMenager();
	ClientMenager* getClientMenager();
		
	Server();
	~Server();
	
};

