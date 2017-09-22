#include "stdafx.h"
#include "Client.h"


void Client::Run()
{
	std::cout << "New Client Connected\n";

	while (connect)
	{

	}

	std::cout << "Disconnected\n";
}

void Client::CheckConnect()
{
}

Client::Client()
{

}

Client::Client(SOCKET socket)
{	
	Client::socket = socket;
	connect = true;
	

}




Client::~Client()
{
}
