#pragma once

class EasyTab{
    public:
        EasyTab(int, int);
        EasyTab(const EasyTab&);
        EasyTab(const EasyTab&, int, int);
        ~EasyTab();

        double& at(int) const;
        void setAll(double);
        static void print(const EasyTab& );
        bool inRange(int);


    private:
        int m_begin, m_end;
        int m_size;
        double *tab;

};