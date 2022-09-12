#pragma once
#include <string>
class BibliotecnaJedinica
{
protected:
	std::string ISBN;
	int godinaIzdanja;
public:
	BibliotecnaJedinica();
	virtual void setISBN() = 0;
	virtual void setGodinaIzdanja() = 0;
	int getGodinaIzdanja();
	std::string getISBN();
	virtual ~BibliotecnaJedinica() = default;
};

