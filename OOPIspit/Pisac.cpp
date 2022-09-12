#include "Pisac.h"
#include <iostream>

Pisac::Pisac()
{
	this->ime = "Ime";
	this->prezime = "Prezime";
}

void Pisac::setIme()
{
	std::cout << "Unesite ime: ";
	std::getline(std::cin, this->ime);
}

void Pisac::setPrezime()
{
	std::cout << "Unesite prezime: ";
	std::getline(std::cin, this->prezime);
}

std::string Pisac::getIme()
{
	return this->ime;
}

std::string Pisac::getPrezime()
{
	return this->prezime;
}
