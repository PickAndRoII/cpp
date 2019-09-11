#include "Zelazko.h"
#include <iostream>

Zelazko::Zelazko(float x, const std::string& nazwa): m_temp(0), m_cena(x), m_nazwa(nazwa){}

void Zelazko::UstawTemperature (int x){
    m_temp = x;

}
void Zelazko::WypiszWlasciwosci() const{
    std::cout<<"Zelazko "<<m_nazwa<<" - cena: "<<m_cena<<". Temperatura: "<<m_temp<<std::endl;
} 

int Zelazko::GetTemp() const{
    return m_temp;
}