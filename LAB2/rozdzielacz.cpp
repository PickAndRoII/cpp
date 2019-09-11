#include "rozdzielacz.h"

#include <iostream>
#include <string.h>
#include <cstdlib>

using namespace std;

Rozdzielacz skonstruuj(const char* tekst, char znak){ 
    Rozdzielacz x;                                    
    x.start=tekst;
    x.end=tekst+strlen(tekst);
    x.partstart=tekst;
    x.partend=tekst;
    x.roz=znak;
    x.length=strlen(tekst);
    return x;
}

bool nastepny(Rozdzielacz *x ){
    x->partstart=nieznak(x->partend, x->roz);
    x->partend=znak(x->partstart, x->roz);
    if(x->partstart==x->end)
        return false;
    return true;
}

void wypisz(const Rozdzielacz *x){
    for(int i=0; i<=x->length && x->start[i]!=x->roz; i++)
        cout<<x->start[i];
        cout<<endl;
}

void kopiuj(Rozdzielacz*x ,char *tab){
    int length=x->partend-x->partstart;
    strncpy(tab,x->partstart, length);
    tab[length]='\0';
    
}

const char *znak(const char *tab, char znag){ 
    int i;
    for(i=0; tab[i]!='\0' && tab[i]!=znag; i++);
    return tab+i;
        
}

const char *nieznak(const char *tab, char znag){ 
    int i;
    for(i=0; tab[i]!='\0' && tab[i]==znag; i++);
    return tab+i;
    }