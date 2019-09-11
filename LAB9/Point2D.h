#pragma once
#include <iostream>

class Point2D{
    //przyjaznie z funkcjami wykorzystujacymi prywatne 
    //pola z klasy
    friend std::ostream& operator<<(std::ostream&, const Point2D&);
    friend Point2D operator+(double, const Point2D&);

    public:

        //konstruktory klasy Point2D
        Point2D();
        Point2D(float, float);
        
        //operatory pre i post
        //inkrementacji/dekrementacji
        Point2D operator--();
        Point2D operator++(int);
        Point2D operator++();
        Point2D operator--(int);

        // //operator przypisania dla klasy Point2D
        // Point2D& operator=(const Point2D&);

        //operator dodajacy obiekty z klasy Point2D
        Point2D operator+(const Point2D&) const;

        //Gettery prywatnych pol z klasy
        float Get_X() const;
        float Get_Y() const;
    private:
        float m_x , m_y;
};

//globalne przeladowanie operatora <<
//dla obiektu klasy Point2D
std::ostream& operator<<(std::ostream&, const Point2D&);

//globalne przeladowanie operatora +
//umozliwiajace dodalie obiektu klasy 
//Point2D do doubla
Point2D operator+(double, const Point2D&);