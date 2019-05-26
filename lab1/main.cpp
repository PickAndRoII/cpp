/*
 Celem zadania jest napisanie kilku klas zwiazanych relacja
 dziedziczenia. Klasy te opisuja elementarne ksztalty. Kazdy ksztalt
 posiada jakies polimorficzne metody i konieczna infrastrukture.

 Kompilwac z opcjami -Wall -g do pliku stest
 UWAGA: Przed rozpoczeciem pisania prosze przeczytac zadanie do konca.
 UWAGA: W tym zadaniu: PI to 3.1415. Wzor na pole trojkata: sqrt( x(x-a)(x-b)(x-c) )
 gdzie "x" to polowa obwodu trojkata.
*/
#include "pch.h"
#include <iostream>
#include "Kwadrat.h"
#include "Kolo.h"
#include "Trojkat.h"

int main() {
	Kwadrat k(4);
	Trojkat t(3, 2, 4);
	Kolo    ko(3);
	Kwadrat k2(10);
	Ksztalt::wypisz(k2);// Kwadrat o boku: 10
	Ksztalt::wypisz(k); // Kwadrat o boku: 4
	std::cout << "-------------------------------------" << std::endl;
	k = k2;
	Ksztalt::wypisz(k);
	std::cout << "-------------------------------------" << std::endl;
	Ksztalt::wypisz(k); // Kwadrat o boku: 10
	Ksztalt& cos = k;
	++cos;
	Ksztalt::wypisz(cos); // Kwadrat o boku: 11
	Ksztalt::wypisz(k);
	std::cout << "-------------------------------------" << std::endl;
	Ksztalt::wypisz(t); // Trojkat o bokach: 3 2 4
	++t;
	Ksztalt::wypisz(t); // Trojkat o bokach: 4 3 5
	std::cout << "-------------------------------------" << std::endl;
	Ksztalt::wypisz(ko);// Kolo o promieniu: 3
	ko++;
	Ksztalt::wypisz(ko);// Kolo o promieniu: 4
	std::cout << "-------------------------------------" << std::endl;

	Ksztalt* b = new Kwadrat(7);
	Ksztalt::wypisz(*b);
	delete b;

	b = new Kolo(7);
	Ksztalt::wypisz(*b);
	delete b;

	const Ksztalt* wszystkie[] = { &k, &k, &ko, &t, &ko };
	const int rozmiar = sizeof(wszystkie) / sizeof(Ksztalt*);
	double pole_calkowite = 0.0;
	for (int idx = 0; idx < rozmiar; ++idx) {
		const Ksztalt* k = wszystkie[idx];
		k->wypisz(std::cout);
		double pole = k->polePow();
		std::cout << " - pole = " << pole << std::endl;

		pole_calkowite += pole;
	}
	std::cout << "Calkowite pole = " << pole_calkowite << std::endl;
}

/* wynik
Kwadrat o boku: 4
Trojkat o bokach: 3 2 4
Kolo o promieniu: 3
Kwadrat o boku: 7
Kolo o promieniu: 7
Kwadrat o boku: 4
 - pole = 16
Kwadrat o boku: 4
 - pole = 16
Kolo o promieniu: 3
 - pole = 28.2735
Trojkat o bokach: 3 2 4
 - pole = 2.90474
Kolo o promieniu: 3
 - pole = 28.2735
Calkowite pole = 91.4517
*/
