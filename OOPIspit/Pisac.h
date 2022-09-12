#pragma once
#include <string>
class Pisac
{
private:
	std::string ime;
	std::string prezime;
public:
	Pisac();
	void setIme();
	void setPrezime();
	std::string getIme();
	std::string getPrezime();
	~Pisac() = default;
};

