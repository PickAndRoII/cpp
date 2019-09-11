/**
 * Celem zadania jest przygotowanie prostej struktury Rozdzielacz, 
 * pomagajaca w dzieleniu napisow na czesci (przedzielone ogranicznikiem). 
 * 
 * Za przygotowanie takiej stuktury odpowiada funkcja skonstruuj. 
 * Funkcja nastepny przygotowuje strukture do pobrania kolejnej czesci napisu, 
 * zwraca wartosc true gdy sie to udalo, lub false gdy teks sie skonczyl.
 * Funkcja wypisz wypisuje zaznaczony tekst. 
 * Funkcja kopiuj kopiuje zaznaczony fragment do danego buffora.  
 *
 * Wymagania co do progamu sa takie same jak na poprzednich zajeciach
 * (szczegolnie makefile!).
 **/

#include "rozdzielacz.h"
#include "rozdzielacz.h"

#include <iostream>

int main()
{
	// -------- Pojedynczy wyraz ---------
	const char* tekst0 = "Jeden_wyraz ";
	Rozdzielacz r0 = skonstruuj( tekst0, ' ' );
	if( nastepny(&r0) ){
		const Rozdzielacz * ptr = &r0;
		wypisz(ptr);
	} else {
		std::cout << "r0 jest puste" << std::endl;
	}
	if( nastepny(&r0) ){
		std::cout << "Tu mial byc tylko jeden wyraz!" << std::endl;
	} else {
		std::cout << "Nie ma kolejnych wyrazow" << std::endl;
	}

	// -------- Rownolegle procesowanie -------
	const char* tekst1 = "Nie ma     tego zlego,  co by na dobre  nie wyszlo";
	const char* tekst2 = "Musze sie uczyc, by dostac ocene, ktora mnie zadowala";		
	Rozdzielacz r1 = skonstruuj( tekst1, ' ' );
	Rozdzielacz r2 = skonstruuj( tekst2, ',' );
	
	int x = 0;
	char buffor[256];
	while( nastepny(&r1) && nastepny(&r2) )
	{
		kopiuj( &r1, buffor );
		std::cout << "***" << " [" << buffor << "] /";
		kopiuj( &r2, buffor );
		std::cout << " [" << buffor << "]" << std::endl;	
		
		// -- to po to aby zminimalizowac niebezpieczenstwo
		//    petli nieskonczonej
		x++;
		if( x > 10 )
			break;	
	}
	std::cout << nastepny(&r1) << " " << nastepny(&r2) << std::endl;
	
	return 0;
}

/* Output
Jeden_wyraz
Nie ma kolejnych wyrazow
*** [Nie] / [Musze sie uczyc]
*** [ma] / [ by dostac ocene]
*** [tego] / [ ktora mnie zadowala]
1 0
*/
