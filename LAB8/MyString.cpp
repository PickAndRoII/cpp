#include "MyString.h"
#include <iostream>
#include <cstring>

using namespace std;

MyString::MyString(){
    m_length=0;
    m_napis=nullptr;
}

MyString::MyString(const char *slowo){
    m_length = strlen(slowo);
    m_napis = new char[m_length+1];
    strcpy(m_napis, slowo);

}

MyString::MyString(char znak){
    m_length = 1;
    m_napis = new char [2];
    m_napis[0] = znak;
    m_napis[1] = '\0';
}

// MyString::~MyString(){
//     delete[] m_napis;
// }

bool MyString::operator==(const MyString &slowo) const{

    return !strcmp(slowo.m_napis, m_napis);

}

void MyString::Print() const{
    cout<<m_napis<<endl;
}

MyString MyString::operator+(const MyString& slowo) const{
    MyString tmp;
    tmp.m_length = slowo.m_length + m_length;
    tmp.m_napis = new char[tmp.m_length + 1];
    strcpy(tmp.m_napis, m_napis);
    strcat(tmp.m_napis, slowo.m_napis);
    return tmp;
}

MyString operator*(int x, const MyString& slowo){
    MyString tmp;
    tmp.m_length = (slowo.m_length)*x;
    tmp.m_napis = new char[tmp.m_length+1];
    for(int i=0; i<x; i++){
        strcat(tmp.m_napis, slowo.m_napis);
    }
    return tmp;
}

MyString MyString::operator*(const int x) const{
    MyString tmp;
    tmp.m_length=x*m_length;
    tmp.m_napis = new char[tmp.m_length+1];
    for(int i=0; i<x; i++){
        strcat(tmp.m_napis, m_napis);
    }
    return tmp;
}

MyString& MyString::operator=(const MyString& slowo){
    if(&slowo != this){
        delete[] m_napis;
        m_length=slowo.m_length;
        m_napis = new char[m_length+1];
        strcpy(m_napis,slowo.m_napis);
    }
    return *this;
}

ostream& operator<<(ostream& wyj, const MyString& slowo){
    wyj<<slowo.m_napis;
    return wyj;
}

char& MyString::operator[](const int x) const{
    return m_napis[x];
}