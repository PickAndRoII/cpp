#include "Ubrania.h"
#include <iostream>

Ubrania::Ubrania(float x, std::string nazwa) : m_cena(x), m_stan(false), m_nazwa(nazwa)  {}

void Ubrania::Prasuj(const Zelazko& zel){
    std::cout<<"Prasuje '"<<m_nazwa<<"' zelazkiem o temp."<<zel.GetTemp()<<std::endl;
    m_stan = true;
}
void Ubrania::WypiszWlasciwosci() const{
    std::cout<<m_nazwa<<" - Cena: "<<m_cena<<" Stan ubrania: "<<(m_stan ? "wyprasowane" : "pogniecione");
}

void Ubrania::Pogniec(){
    m_stan = false;
}