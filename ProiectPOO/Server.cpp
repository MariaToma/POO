#include"Server.h"

Server* Server::mpInstance = NULL;


Server::Server()
{
	/////
}

Server&::Server::GetInstance()
{
	if (mpInstance == NULL)
	{
		mpInstance = new Server();
	}
    return *mpInstance;
}
void Server::AddAccount(Account *a)
{
	AccountList.push_back(a);

}

void Server::ViewAccountList()
{
	for (int i = 0; i < AccountList.end; i++)
	{
		Acc
	}
}
