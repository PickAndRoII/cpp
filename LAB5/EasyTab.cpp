#include "EasyTab.h"
#include <iostream>

using namespace std;


EasyTab::EasyTab(int begin, int end){
    m_begin=begin;
    m_end=end;
    m_size=m_end-m_begin;

    tab = new double[m_size];
}
        
EasyTab::EasyTab(const EasyTab& tabb){
    m_begin=tabb.m_begin;
    m_end=tabb.m_end;
    m_size=tabb.m_size;
    tab= new double[m_size];
    for(int i=0; i<tabb.m_size; i++){
        tab[i]=tabb.tab[i];
    }
}

EasyTab::EasyTab(const EasyTab &tabb, int a, int b){
    m_begin=a;
    m_end=b;
    m_size=b-a;
    tab= new double[m_size];
    for(int i=0; i<tabb.m_size; i++){
        tab[i]=tabb.tab[i];
    }
}

EasyTab::~EasyTab(){
    delete[] tab;
}

double& EasyTab::at(int mem) const{
    
    int ktory=m_begin-mem; 
        return tab[ktory];
}
        
void EasyTab::setAll(double val){
    for(int i=0; i<m_size; i++){
        tab[i] = val;
    }
}
        
void EasyTab::print(const EasyTab &mem){
    for(int i=0; i<m_size; i++)
        cout<<mem.tab[i];
}

bool EasyTab::inRange(int mem){
    if(mem >= m_begin && mem<m_end)
        return true;
    else 
        return false;
}