#ifndef _header_324234
#define _header_324234


class CException
{
private:
	char*message;
	int code;
public:
	CException(int code, char*msg);
	~CException();
	int getCode() { return this->code; };
	void PrintErrMessage(CException*e);
	

};




#endif