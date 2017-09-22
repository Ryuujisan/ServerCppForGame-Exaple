#include "stdafx.h"
#include "Server.h"

static Server* Instance;

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
			Client *client = new Client(newConection);
			

			clientMenager->AddPlayer(*client);
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

 RoomMenager* Server::getRoomMenager()
 {
	 return roomMenager;
 }

 ClientMenager* Server::getClientMenager()
 {
	 return clientMenager;
 }

