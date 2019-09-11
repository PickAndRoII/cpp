#pragma once
#include <iostream>
class Zelazko{
    
    public:
        //konstruktor klasy Zelazko
        Zelazko(float, const std::string& nazwa);

        //metoda zmieniajace temp zelazka na zadana
        void UstawTemperature (int );

        //metoda wypisujaca wlasciwosci
        void WypiszWlasciwosci() const; 

        // metoda zwracajaca temp zelazka
        int GetTemp() const;

    protected:
        int m_temp;
        float m_cena;
        const std::string m_nazwa;
};