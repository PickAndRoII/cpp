#pragma once
#include "Ubrania.h"
#include "Zelazko.h"
#include <iostream>

class Spodnie : public Ubrania{
    public:
        //konstruktor klasy Spodnie
        Spodnie(float, std::string);
        //metoda zmieniajaca m_stann na true
        void PrasujNogawki(const Zelazko&);
        //metoda wypisujaca wlasciwosci
        void WypiszWlasciwosci() const;

    protected:
        bool m_stann;
};