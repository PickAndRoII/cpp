#include "Rational.h"
#include <iostream>

using namespace std;

void Rational::Print() const{
    if(m_m!=1)
        cout<<m_l<<"/"<<m_m<<endl;
    else
        cout<<m_l<<endl;
};