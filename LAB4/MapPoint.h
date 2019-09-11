#pragma once

static int count=0;

class MapPoint{
    public:
        //konstruktor tworzacy punkt na mapie i wypisujacy go
        MapPoint(const double, const double);

        //destruktor, zmniejsza ilosc punktow na mapie 
        ~MapPoint();

        //funkcja wypisuje punkt
        void print() const;

        //funkcja przesuwa punkt na mapie
        void move(const double, const double);

        //funkcja wypisuje punkt na mapie, ktory jest dalej
        MapPoint & furtherFrom(MapPoint &first, MapPoint &second) const;

        //funkcja statyczna, ktora wyszukuje punkt na mapie.
        //Punkt ten znajduje sie miedzy dwoma punktami.
        static MapPoint inTheMiddle(const MapPoint &first,const MapPoint &second);
        
    private:
        void fun(double, double, char, char);
        double m_dlu;
        double m_szer;
        char m_a;
        char m_b;
    };

