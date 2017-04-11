#ifndef _header_478823
#define _header_478823
#include"Account.h"
#include<list>
#include<iostream>

using namespace std;
class Server
{
private:
	Server();
	~Server();
	static Server *mpInstance;
	 list<Account*> AccountList;
public:
	static Server& GetInstance();
	void AddAccount(Account*);
	bool VerifyExistance();
	void RemoveAccount();
	void ViewAccountList();
	Server &operator[](int i);


};





#endif
