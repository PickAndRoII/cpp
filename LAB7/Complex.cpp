#include "Complex.h"
#include <iostream>
#include <cmath>

using namespace std;

void Complex::Print() const{
    if(m_y!=0){
        if(m_y>0)
            cout<<m_x<<"+"<<m_y<<"i"<<endl;
        else
            cout<<m_x<<m_y<<"i"<<endl;
    }

    else
        cout<<m_x<<endl;
}

double Complex::Im() const{
    return m_y;
}

Complex Complex::operator+(const Complex& x){
    Complex tmp;
    tmp.m_x=m_x+x.m_x;
    tmp.m_y=m_y+x.m_y;
    return tmp;
}

// a+ib oraz c+id, to odpowiednie dzialania:
// * mnozenie liczb zespolonych: (a*c - b*d) + i(a*d + b*c) 
Complex Complex::operator*(const Complex& x){
    Complex tmp;
    tmp.m_x=m_x*x.m_x-m_y*x.m_y;
    tmp.m_y=m_x*x.m_y+m_y*x.m_x;
    return tmp;
}

Complex Complex::operator-(){
    Complex tmp;
    tmp.m_x=-m_x;
    tmp.m_y=-m_y;
    return tmp;
}
Complex Complex::operator-(const Complex& x) const{
    Complex tmp;
    tmp.m_x=m_x-x.m_x;
    tmp.m_y=m_y-x.m_y;
    
    return tmp;
}

double Complex::Modulo(const Complex x) {
    
    return hypot(x.m_x,x.m_y);
}