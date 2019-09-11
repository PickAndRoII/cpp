#pragma once
#include "Ubrania.h"
#include "Zelazko.h"
#include <iostream>

class Koszula : public Ubrania{
    public:
        //konstruktor klasy Koszula
        Koszula(float, std::string);

        //metoda zmieniajace m_stanr na true
        void PrasujRekawy(const Zelazko&);

        //metoda wypisujaca wlasciwosci
        void WypiszWlasciwosci() const;
    protected:
        bool m_stanr;
};