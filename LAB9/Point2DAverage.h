#pragma once
#include "Point2D.h"
#include <iostream>



class Point2DAverage{
    friend std::ostream& operator<<(std::ostream&, const Point2DAverage&);
    public:
        Point2DAverage();
        Point2D operator()(const Point2D&);
        void reset();
    private:
        float m_x = 0;
        float m_y = 0;
        int count = 0;
};

std::ostream& operator<<(std::ostream&, const Point2DAverage& point);
    