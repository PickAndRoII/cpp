#include "Koszula.h"
#include <iostream>

Koszula::Koszula(float x, std::string nazwa) : Ubrania(x, nazwa), m_stanr(false) {}

void Koszula::PrasujRekawy(const Zelazko& zel){
    std::cout<<"Prasuje 'rekawy "<<m_nazwa<<"' zelazkiem o temp."<<zel.GetTemp()<<std::endl;
    m_stanr = true;
}

void Koszula::WypiszWlasciwosci() const{
    Ubrania::WypiszWlasciwosci();
    std::cout<<" Stan rekawow: " <<(m_stanr ? "wyprasowane" : "pogniecione")<<std::endl;
}
