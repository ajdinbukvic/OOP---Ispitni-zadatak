#pragma once
#include <vector>
#include "BibliotecnaJedinica.h"
class Biblioteka
{
private:
public:
	std::vector<BibliotecnaJedinica> jedinice;
	Biblioteka();
	void unosJedinice();
	int getBrJedinica();
	//BibliotecnaJedinica* operator[](int indeks);
	void najstarijeIzdanje();
	bool ISBNProvjera(std::string isbn);
	std::vector<BibliotecnaJedinica>& getJedinice();
	~Biblioteka() = default;
};

