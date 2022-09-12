#include "BibliotecnaJedinica.h"

BibliotecnaJedinica::BibliotecnaJedinica()
{
	this->ISBN = "....";
	this->godinaIzdanja = 0;
}

int BibliotecnaJedinica::getGodinaIzdanja()
{
	return this->godinaIzdanja;
}

std::string BibliotecnaJedinica::getISBN()
{
	return this->ISBN;
}
