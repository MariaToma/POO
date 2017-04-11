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

//void server::viewaccountlist()
//{
//	for (int i = 0; i < accountlist.end; i++)
//	{
//		
//	}
//}
Server& Server::operator[](int i)
{
	return AccountList[i];
	//for (int i = 0; i < AccountList.end; i++)
	{
		//for (int j = i; j < AccountList.end; j++)
	
	}
}
