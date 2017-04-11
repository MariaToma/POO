#ifndef _header_234234
#define _header_234234
#include<iostream>
#include"Exception.h"

using namespace std;
class Account
{
private:
	char* MailAdress;
	char* Password;
	enum Status {Valid, Invalid};
public:
	Account();
	~Account();
	
	void SetMailAdress();
	void SetPassword();
	char *getPassword() { return this->Password; };
	char*getMailAdress() { return this->MailAdress; };


};



#endif