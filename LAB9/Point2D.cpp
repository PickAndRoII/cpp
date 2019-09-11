#include "Point2D.h"

using namespace std;

Point2D::Point2D() : m_x(0), m_y(0){}

Point2D::Point2D(float a, float b) : m_x(a), m_y(b){}

ostream& operator<<(ostream& wyj, const Point2D& point){
    wyj<<"("<<point.m_x<<","<<point.m_y<<")";
    return wyj;
}

Point2D Point2D::operator--(){
    m_x--;
    m_y--;
    return *this;
}

Point2D Point2D::operator++(int){
    Point2D tmp = *this;
    m_x++;
    m_y++;
    return tmp;
}

Point2D Point2D::operator++(){
    m_x++;
    m_y++;
    return *this;
}

Point2D Point2D::operator--(int){
    Point2D tmp = *this;
    m_x--;
    m_y--;
    return tmp;
}

//  Point2D& Point2D::operator=(const Point2D &point){
//      if(&point != this){
//          m_x=point.m_x;
//          m_y=point.m_y;
//      }
//      return *this;
//  }
        
Point2D Point2D::operator+(const Point2D& point) const{
    Point2D tmp;
    tmp.m_x = m_x + point.m_x;
    tmp.m_y = m_y + point.m_y;
    return tmp;
}

Point2D operator+(double a, const Point2D& point){
    Point2D tmp;
    tmp.m_x = point.m_x + a;
    tmp.m_y = point.m_y + a;
    return tmp;
}

float Point2D::Get_X() const{
    return m_x;
}

float Point2D::Get_Y()const{
    return m_y;
}
