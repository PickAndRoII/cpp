#pragma once
#include "Rational.h"


class Fun{
    public:
        //funkcja dodajaca dwa ulamki
        static Rational Add(Rational, Rational);

        //funkcja mnozaca dwa ulamki
        static Rational Multiply(Rational, Rational);

        //funkcja dzielaca dwa ulamki
        static Rational Divide(Rational, Rational);

        //funkcja obliczajaca licznik i mianownik dodawania count ulamkow
        static void Average(Rational);

        //funkcja obliczajaca srednia z count ulamkow
        static Rational Average();

        //funkcja obliczajaca najwiekszy wspolny dzielnik liczby
        static int Nwd(int, int);
    private:
        //licznik i mianownik statyczny dla funkcji Average oraz
        // liczba ulamkow
        static int a, b, count;
};