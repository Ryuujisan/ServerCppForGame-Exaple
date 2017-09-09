// cppServer.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	Server* server = new Server();
	server->Init();
	server->Run();

    return 0;
}

