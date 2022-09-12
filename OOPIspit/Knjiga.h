#pragma once
#include "BibliotecnaJedinica.h"
#include "Pisac.h"
class Knjiga :
    public BibliotecnaJedinica
{
private:
    std::string naziv;
    Pisac pisac;
public:
    Knjiga();
    void setNaziv();
    void setPisac();
    void ispisKnjige();
    void setISBN();
    void setGodinaIzdanja();
    ~Knjiga() = default;
};

