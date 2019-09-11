#pragma once
#include "Zelazko.h"
#include <iostream>

class Ubrania{
    public:
        //konstruktor klasy Ubrania
        Ubrania(float, std::string);

        //metoda zmieniajaca m_stan na true 
        void Prasuj(const Zelazko&);

        //metoda wypisujaca wlasciwosci
        void WypiszWlasciwosci() const;

        //metoda zmieniajace m_stan na false
        void Pogniec();
    protected:
        //wlasciwosci Ubran
        float m_cena;
        bool m_stan;
        std::string m_nazwa;
};