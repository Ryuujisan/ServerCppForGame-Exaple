#pragma once
#include "Client.h"

class ClientMenager
{
private:
	long id;
	std::map<int, Client> clientList;
public:

	void AddPlayer(Client client);


	ClientMenager();
	~ClientMenager();
};

