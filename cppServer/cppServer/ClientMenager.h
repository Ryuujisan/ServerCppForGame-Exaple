#pragma once
#include "Client.h"

class ClientMenager
{
	friend class Client;
private:
	std::map<int, Client> clientList;
public:

	void AddPlayer(Client client);


	ClientMenager();
	~ClientMenager();
};

