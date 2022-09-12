#include "Casopis.h"
#include <iostream>

Casopis::Casopis(): BibliotecnaJedinica()
{
	this->naziv = "Nesto";
	this->vrsta = "Neka";
}

void Casopis::setNaziv()
{
	std::cout << "Unesite naziv: ";
	std::getline(std::cin, this->naziv);
}

void Casopis::setVrsta()
{
	std::cout << "Unesite vrstu: ";
	std::getline(std::cin, this->vrsta);
}

void Casopis::ispisCasopisa()
{
	std::cout << "Naziv: " << this->naziv << std::endl;
	std::cout << "Autor: " << this->vrsta << std::endl;
	std::cout << "ISBN: " << this->ISBN << std::endl;
	std::cout << "Izdanje: " << this->godinaIzdanja << std::endl;
}

void Casopis::setISBN()
{
	std::cout << "Unesite ISBN: ";
	std::getline(std::cin, this->ISBN);
}

void Casopis::setGodinaIzdanja()
{
	std::cout << "Unesite godinu izdanja: ";
	std::cin >> this->godinaIzdanja;
	std::cin.ignore();
}
