#include "stdafx.h"
#include "Server.h"

static Server* Instance;
RoomMenager *roomMenager;
ClientMenager *clientMenager;

void Server::Init()
{
	WSAData wsaData;
	WORD DLLLVersion = MAKEWORD(2, 1);

	if (WSAStartup(DLLLVersion, &wsaData) != 0)
	{
		MessageBoxA(NULL, "WinSock startup failed", "Error", MB_OK | MB_ICONERROR);
		exit(1);
	}

	addrlen = sizeof(adres);
	adres.sin_addr.s_addr = inet_addr("127.0.0.1");
	adres.sin_port = htons(port);
	adres.sin_family = AF_INET;

	socketListen = socket(AF_INET, SOCK_STREAM, NULL);
	bind(socketListen, (SOCKADDR *)&adres, sizeof(adres));
	listen(socketListen, SOMAXCONN);

}

void Server::Run()
{
	std::cout << "Server Started....\n";

	while (true)
	{
		SOCKET newConection;
		newConection = accept(socketListen, (SOCKADDR *)&adres, &addrlen);

		if (newConection != 0)
		{
			std::cout << "New Client Connected\n";

		}

	}
}













Server::Server()
{
	port = 6969;
	Instance = this;

	roomMenager = new RoomMenager();
	clientMenager = new ClientMenager();
}


Server::~Server()
{
}


 Server* Server::getInstance()
{
	return Instance;
}

 RoomMenager* getRoomMenager()
 {
	 return roomMenager;
 }

 ClientMenager* getClientMenager()
 {
	 return clientMenager;
 }

