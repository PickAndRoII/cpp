#include "MyString.h"
#include <cstring>
#include <iostream>

using namespace std;

MyString::MyString(const char *slowo){
    cout<<"+++ Create : "<<slowo<<endl;
    size_t size;
    size=strlen(slowo);
    this->m_string = new char[size+1];
    strcpy(m_string, slowo);
}

char* MyString::c_str() const{
    return m_string;
}

int MyString::length() const {
    return strlen(m_string);
}

void MyString::append(const MyString &slowo){
    size_t size;
    size=strlen(m_string)+slowo.length();
    size=size+1;
    char *cur=new char[strlen(m_string)+1];
    strcpy(cur, m_string);
    delete[] m_string;
    this->m_string = new char[size];
    strcpy(m_string, cur);
    strcat(m_string, slowo.c_str());
    delete[] cur;
}

void MyString::replace(const char *nowy){
    int size_new = strlen(nowy);
    delete[] m_string;
    m_string = new char[size_new+1];

    strcpy(m_string, nowy);
}

void MyString::swap(MyString &tekst){
    size_t size1 = strlen(m_string);
    size_t size2 = tekst.length();
    char *temp = new char[size1+1];
    strcpy(temp, m_string);
    delete[] m_string;
    m_string = new char[size2+1];
    strcpy(m_string,tekst.c_str());
    delete[] tekst.m_string;
    tekst.m_string = new char[size1+1];
    strcpy(tekst.m_string, temp);
    delete[] temp;
}

MyString::~MyString(){
    cout<<"--- Delete : "<<m_string<<endl;
    delete[] this->m_string;
}