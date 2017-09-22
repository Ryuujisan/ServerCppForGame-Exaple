#pragma once
class Client
{
private:
	SOCKET socket;
	bool connect;

public:

	void Run();
	void CheckConnect();
	Client();
	Client(SOCKET socket);
	~Client();
};

