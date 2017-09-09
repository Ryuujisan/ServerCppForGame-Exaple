#pragma once
class Client
{
private:
	SOCKET socket;


public:
	Client();
	Client(SOCKET socket);
	~Client();
};

