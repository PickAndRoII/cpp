#pragma once

#include <stdio.h>
#include <stdlib.h>

//typedefy uzywane po to,
//aby nasz program kompilowal
//sie (poniewaz main nie moze 
//ulec zmianie)
typedef int DlugoscCiagu;
typedef float UzywanyTyp;
typedef UzywanyTyp* Ciag;
typedef float (*Funkcja)(int, Ciag);

//funkcja tworzaca ciag
//alokujaca miejsce 
Ciag utworzCiag(float pier, int dlu, float ilo);

//funkcja wypisujaca nasz ciag
void wypiszCiag(Ciag geo, int rozmiar );

//trywialne funkcje liczace sume,
//iloczyn ciagu oraz wyznaczajace jego
//maximum czy minimum
float sumaLiczb(int dlu, Ciag geo);
float iloczynLiczb(int dlu, Ciag geo);
float maximumLiczb(int dlu, Ciag geo);
float minimumLiczb(int dlu, Ciag geo);


//funkcja ktora wywoluje funkcje
//fun dla ciagu geo i wypisuje ja
void zbadajIWypisz( Funkcja fun, Ciag geo, int rozmiar);

//funkcja ktora wywoluje funkcje
//fun dla ciagu geo
float badajCiag( Funkcja fun, Ciag geo, int rozmiar );

//funkcja sprawdzajaca znak ciagu
//Sprawdzamy ile liczb jest dodatnich,
//a ile ujemnych. jesli jest choc jedna 
//dodatnia i jedna ujemna zwracamy 0
//gdy ilosc ujemnych=0 zwracamy  +
//a gdy ilosc dodatnich=0 zwracamy -
char znakCiagu(Ciag geo, int rozmiar );

void zniszczCiag(Ciag const *geo);



