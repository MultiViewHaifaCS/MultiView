// MultiView.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
#include "Server.h"

int main()
{
	Server server;
	server.initSocket();
	server.connect();
}

