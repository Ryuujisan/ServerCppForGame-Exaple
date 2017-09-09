#include "stdafx.h"
#include "Client.h"


Client::Client()
{
}

Client::Client(SOCKET socket)
{
	Client::socket = socket;
}


Client::~Client()
{
}
