#include "Knjiga.h"
#include <iostream>

Knjiga::Knjiga() : BibliotecnaJedinica()
{
	this->naziv = "Nesto";
}

void Knjiga::setNaziv()
{
	std::cout << "Unesite naziv: ";
	std:getline(std::cin, this->naziv);
}

void Knjiga::setPisac()
{
	this->pisac.setIme();
	this->pisac.setPrezime();
}

void Knjiga::ispisKnjige()
{
	std::cout << "Naslov: " << this->naziv << std::endl;
	std::cout << "Autor: " << this->pisac.getIme() << this->pisac.getPrezime() << std::endl;
	std::cout << "ISBN: " << this->ISBN << std::endl;
	std::cout << "Izdanje: " << this->godinaIzdanja << std::endl;
}

void Knjiga::setISBN()
{
	std::cout << "Unesite ISBN: ";
	std::getline(std::cin, this->ISBN);
}

void Knjiga::setGodinaIzdanja()
{
	std::cout << "Unesite godinu izdanja: ";
	std::cin >> this->godinaIzdanja;
	std::cin.ignore();
}
