#pragma once
#include "Rational.h"

//Klasa reprezentujaca liczby zespolone

class Complex{
    public:
        //konstruktor podstawowy, ale rowniez konwertujacy z double
        Complex(double a = 0, double b = 0) : m_x(a), m_y(b)
        {}

        //funkcja wypisujaca liczbe zespolona
        void Print() const;

        //funkcja wypisujaca czesc urojona liczby zespolonej
        double Im() const;

        //funkcja konwertujaca na double
        explicit operator double() const{
            return m_x;
            }

        //kponstruktor konwertujaocy na Complex z Rational
        Complex(Rational a): m_x((float)(a)), m_y(0)
        {}

        //statyczna funkcja liczaca modul liczby zespolonej
        static double Modulo(Complex);

        //przeciazony operator + przyjmujacy jako argument Complex
        //realizujacy odejmowanie liczb zespolonych
        Complex operator+(const Complex&);

        //przeciazony operator + przyjmujacy jako argument Complex
        //realizuje mnozenie liczb zespolonych
        Complex operator*(const Complex&);

        //przeciazony operator - nie przyjmujacy argumentow
        //realizuje odwracanie licz zespolonych
        Complex operator-();

        //przeciazony operator - przyjmujacy jako argument Complex
        //realizuje odejmowanie licz zespolonych
        Complex operator-(const Complex&) const;

    private:
        double m_x, m_y;

};