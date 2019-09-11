#pragma once
//Wiktor Jasiski, Maria Korkuc

class MyString{
public:
    //Konstruktor obiektu, alokuje pamiec:
     MyString(const char *);

     //Destruktor obiektu, zwalnia pamiec
    ~MyString();

    //funkcja zwraca dostep do obiektu
    char *c_str() const;

    //funkcja oblicza dlugosc slowa
    int length() const;

    //funkcja dodaje dwa stringi
    void append(const MyString &);

    //funkcja podmienia napis
    void replace(const char *);

    //funkcja zamienia dwa stringi miejscami
    void swap(MyString &);

private:
    char *m_string;
};