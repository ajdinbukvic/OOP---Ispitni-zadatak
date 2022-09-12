#pragma once
#include "BibliotecnaJedinica.h"
class Casopis :
    public BibliotecnaJedinica
{
private:
    std::string naziv;
    std::string vrsta;
public:
    Casopis();
    void setNaziv();
    void setVrsta();
    void ispisCasopisa();
    void setISBN();
    void setGodinaIzdanja();
    ~Casopis() = default;
};

