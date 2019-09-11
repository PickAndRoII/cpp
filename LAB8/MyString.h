#pragma once
#include <iostream>

class MyString{
    //deklaracja przyjazni dla funkcji globalnych
    //operator * i operator <<
    friend MyString operator*(int, const MyString&);
    friend std::ostream& operator<<(std::ostream& wyj, const MyString&);

    public:
        //Konstruktory obiektu przyjmujace rozne argumenty
        MyString();
        MyString(char);
        MyString(const char*);

        //zakomentowany destruktor, bo blad w wypisywaniu
        // ~MyString();

        //Funkcja sprawdzajaca, czy napisy sa identyczne,
        //jesli tak, zwraca wartosc true
        bool operator==(const MyString &) const;

        //Funkcja wypisujaca napis
        void Print() const;

        //operator+ dodajacy dwa napisy do siebie
        MyString operator+(const MyString&) const;

        //operator* mnozacy napis okreslona
        //liczbe razy
        MyString operator*(const int) const;

        //operator przypisania
        MyString& operator=(const MyString&);

        //operator[], zwracajacy dany element napisu, czyli znak
        char& operator[](const int) const;
        
        

    private:
        char *m_napis;
        int m_length;

};

//operator* muszacy byc poza klasa, poniewaz pierwszy argument
// jest intem
MyString operator*(int, const MyString&);

//operator wypisywania obiektu przy pomocy cout
std::ostream& operator<<(std::ostream& wyj, const MyString&);