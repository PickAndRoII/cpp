#include "Spodnie.h"

#include <iostream>

Spodnie::Spodnie(float x, std::string nazwa) : Ubrania(x, nazwa), m_stann(false) {}

void Spodnie::PrasujNogawki(const Zelazko& zel){
    std::cout<<"Prasuje 'nogawki "<<m_nazwa<<"' zelazkiem o temp."<<zel.GetTemp()<<std::endl;
    m_stann = true;
}

void  Spodnie::WypiszWlasciwosci() const{
    Ubrania::WypiszWlasciwosci();
    std::cout<<" Stan nogawek: " <<(m_stann ? "wyprasowane" : "pogniecione")<<std::endl;
}
