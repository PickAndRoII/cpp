#pragma once

class Fun;

class Rational{
    friend class Fun;
    public:
        //Konstruktor domyslny
        Rational() : m_l(0), m_m(1)
        {}

        //Konstruktor konwertujacy z int na Rational
        Rational(int l): m_l(l), m_m(1)
        {}

        //Konstruktor
        Rational(int l, int m) : m_l(l), m_m(m)
        {}

        //Funkcja konwertujaca z Rational na float
        operator float() const{
            return ((float)m_l/(float)m_m);
        }

        //funkcja wypisujaca ulamek
        void Print() const;

    private:
        //licznik i mianownik ulamka
        int m_l, m_m;
};