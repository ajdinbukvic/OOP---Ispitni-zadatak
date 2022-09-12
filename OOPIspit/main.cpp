#include <iostream>
#include "Biblioteka.h"
int meni() {
	system("cls");
	std::cout << "1. Dodaj novu jedinicu\n";
	std::cout << "2. Ispis jedinica\n";
	std::cout << "3. Ispis casopisa\n";
	std::cout << "4. Broj elemenata u kolekciji\n";
	std::cout << "5. Objekat na nekom indeksu\n";
	std::cout << "6. Najstarije izdanje u kolekciji\n";
	int izbor;
	do {
		std::cout << "Izbor: ";
		std::cin >> izbor;
	} while (izbor < 1 || izbor > 6);
	std::cin.ignore();
	return izbor;
}
int main() {
	Biblioteka b;
	int izbor;
	do {
		izbor = meni();
		switch (izbor) {
		case 1:
			b.unosJedinice();
			break;
		case 2:
			//for (int i = 0; i < b.getBrJedinica(); i++) {
			break;
		case 3:
			break;
		case 4:
			std::cout << "Broj elemenata u kolekciji: " << b.getBrJedinica() << std::endl;
			break;
		case 5:
			int indeks;
			std::cout << "Unesite indeks: ";
			std::cin >> indeks;
			std::cin.ignore();
			//std::cout << "Objekat na nekom indeksu: " << std::endl;
			break;
		case 6:
			b.najstarijeIzdanje();
			break;
		}
		system("pause");
	} while (izbor != 6);
	return 0;
}
