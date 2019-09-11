/*
 * Posługiwanie się ciągami znaków w stylu języka C jest bardzo uciążliwe.
 * Dlatego została wymyślona klasa std::string, która to zadanie zdecydowanie ułatwia.
 * Dzisiaj naszym celem będzie zaimplementowanie podobnej klasy MyString, 
 * która pomoże nam przyzwyczaić się do używania std::string. 
 * 
 * W klasie powinny znaleźć się następujące metody:
 * - głośny konstruktor;
 * - głośny destruktor;
 * - length : ilość znaków;
 * - c_str : dostęp do stringa;
 * - append : rozszerzanie string o zawartosc innego stringa;
 * - replace : zamiana stringa na podany (jakby tworzenie od nowa);
 * - swap : wymiana stringów pomiędzy obiektami.
 *  
 * Proszę zadbać o zarządzanie pamięcią i odpowiednie const, private etc.
 * 
 * Bardzo pomocne mogą być metody strlen i strcpy (z <cstring>). 
 * Nie wolno w zadaniu korzystać z klasy bibliotecznej std::string.
 * 
 * Zadanie nalezy dokonczyc w domu, poniewaz moze byc wykorzystane na 
 * kolejnych zajeciach.
*/

#include <iostream>
#include "MyString.h"
#include "MyString.h"

int main() {
	
	// length & c_str
	MyString s1("Dzien");
	std::cout << s1.c_str() << std::endl;
	
	 const MyString s2("dobry");
	std::cout << "len(" << s2.c_str() << ") = " << s1.length() << std::endl;

	// // append
	s1.append(s2);
	std::cout << s1.c_str() << std::endl;
	
	// // replace
	s1.replace("bede sie");
	std::cout << s1.c_str() << std::endl;

	// // swap
	MyString s3("duzo uczyl");
	
	std::cout << "Posledni padawan: \"" << s1.c_str()  << " " << s3.c_str() << "\"" << std::endl;
	s1.swap(s3);
	std::cout << "Jak mistrz Yoda: \"" << s1.c_str()  << " " << s3.c_str() << "\"" << std::endl;
	
	return 0;
}

/* Output:
 +++ Create : Dzien
Dzien
 +++ Create : dobry
len(dobry) = 5
Dziendobry
bede sie
 +++ Create : duzo uczyl
Posledni padawan: "bede sie duzo uczyl"
Jak mistrz Yoda: "duzo uczyl bede sie"
 --- Delete : bede sie
 --- Delete : dobry
 --- Delete : duzo uczyl
*/
