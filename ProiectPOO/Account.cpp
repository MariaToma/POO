#include"Account.h"
#include"Errors.h"
Account::Account()
{
	MailAdress = new char[50];
	Password = new char[50];
	SetMailAdress();
	SetPassword();
}
Account::~Account() 
{

}
void Account::SetMailAdress() 
{
    cout << "Introduceti adresa de email: ";
	cin >> MailAdress;

}
Account& Account::operator[](int i)
{
	// return 
}
void Account::SetPassword()
{
	try 
	{
		cout << "Setati parola: ";
		cin >> Password;
		char*aux = new char[50];
		cout << "Confirmati parola: ";
		cin >> aux;
		if (strcmp(aux, Password) != 0)
		{
			throw new CException(ERR_NOT_SAME_PASS, "Parolele nu sunt identice!!");
			Status::Invalid;
		}
		else 
		{
			cout << "Contul a fost creat cu succes!" << endl;
			Status::Valid;
		}
	}
	catch (CException *e)
	{
	       e->PrintErrMessage(e);
		   delete e;
	}
}