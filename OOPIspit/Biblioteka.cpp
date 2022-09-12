#include "Biblioteka.h"
#include "Knjiga.h"
#include <iostream>
#include "Casopis.h"
#include <memory>
Biblioteka::Biblioteka()
{
	this->jedinice.clear();
}

void Biblioteka::unosJedinice()
{
	int izbor;
	do {
		std::cout << "Unos bibliotecne jedinice: (0 - Knjiga, 1 - Casopis)";
	} while (izbor < 0 || izbor>1);
	std::cin.ignore();
	if (izbor == 0) {
		Knjiga k;
		k.setISBN();
		k.setGodinaIzdanja();
		k.setNaziv();
		k.setPisac();
		if (ISBNProvjera(k.getISBN())) {
			std::cout << "ISBN vec postoji!" << std::endl;
			return;
		}
		else jedinice.push_back(k);
	}
	else {
		Casopis c;
		c.setISBN();
		c.setGodinaIzdanja();
		c.setNaziv();
		c.setVrsta();
		if (ISBNProvjera(c.getISBN())) {
			std::cout << "ISBN vec postoji!" << std::endl;
			return;
		}
		else jedinice.push_back(c);
	}
}

int Biblioteka::getBrJedinica()
{
	return this->jedinice.size();
}

//BibliotecnaJedinica* Biblioteka::operator[](int indeks)
//{
//	try {
//		if (indeks < 0 || indeks > this->jedinice.size()) throw "GRESKA";
//		else return this->jedinice[indeks];
//	}
//	catch (const char* greska) {
//		std::cout << greska;
//	}
//}

void Biblioteka::najstarijeIzdanje()
{
	int max = this->jedinice[0].getGodinaIzdanja();
	for (int i = 1; i < this->jedinice.size(); i++) {
		if (this->jedinice[i].getGodinaIzdanja() > max) {
			max = this->jedinice[i].getGodinaIzdanja();
		}
	}
	std::cout << "Najstarije izdanje je : " <<max<<" godina"<< std::endl;
}

bool Biblioteka::ISBNProvjera(std::string isbn)
{
	for (int i = 0; i < this->jedinice.size(); i++) {
		if (isbn == this->jedinice[i].getISBN()) {
			return true;
		}
	}
	return false;
}

std::vector<BibliotecnaJedinica>& Biblioteka::getJedinice()
{
	return this->jedinice;
}

