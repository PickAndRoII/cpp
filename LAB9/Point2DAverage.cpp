#include "Point2DAverage.h"

using namespace std;


Point2DAverage::Point2DAverage(){}

Point2D Point2DAverage::operator()(const Point2D& point){
    m_x = m_x + point.Get_X();
    m_y = m_y + point.Get_Y();
    count++;
    Point2D punkt(m_x/count, m_y/count);
    return punkt;
}

ostream& operator<<(std::ostream& wyjs, const Point2DAverage& point1){
    wyjs<<"("<<point1.m_x/point1.count<<","<<point1.m_y/point1.count<<")";
    return wyjs;
}

void Point2DAverage::reset(){
    m_x = 0;
    m_y = 0;
    count = 0;
}