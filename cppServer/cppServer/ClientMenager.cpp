#include "stdafx.h"
#include "ClientMenager.h"



void ClientMenager::AddPlayer(Client client)
{
	clientList[id++] = client;
	std::cout << clientList.size();
}

ClientMenager::ClientMenager()
{
	id = 0;
}


ClientMenager::~ClientMenager()
{
}
