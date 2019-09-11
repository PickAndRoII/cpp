#pragma once


//mamy strukture, ktora przechowuje slugosc napisu, jego poczatek
//i koniec, oraz tymczasowy poczatek i koniec danej czesci napisu
typedef struct Rozdzielacz{
    const char* start;
    const char* end;
    const char* partstart;
    const char* partend;
    int length;
    char roz;
    

} Rozdzielacz;

//uzupelnia strukture w mian
Rozdzielacz skonstruuj(const char* tekst, char znak);

//funkcja szuka, czy istnieje nastepny wyraz po rozdzielaczu
//wykorzystujac funkcje znak i nieznak
bool nastepny(Rozdzielacz * );

//funkcja wypisuje wyrazy
void wypisz(const Rozdzielacz *);

//funkcjia kupiuje wyrazy do buffora
void kopiuj(Rozdzielacz*,char tab[]);

//funkcja szuka nastepnego znaku, ktory jest rozdzielaczem
const char *znak(const char*tab, char znak); 

//funkcja szuka miejsca nastepnego znaku, ktora nie jest rozdzielaczem
const char *nieznak(const char*tab, char znak);