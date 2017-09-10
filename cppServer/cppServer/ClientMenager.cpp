#include "stdafx.h"
#include "ClientMenager.h"



void ClientMenager::AddPlayer(Client client)
{
	clientList[0] = client;
	std::cout << clientList.size();
}

ClientMenager::ClientMenager()
{
	
}


ClientMenager::~ClientMenager()
{
}
