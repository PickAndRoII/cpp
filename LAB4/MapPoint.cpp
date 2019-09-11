#include "MapPoint.h"
#include <iostream>
#include <cmath>

using namespace std;

 MapPoint::MapPoint(const double dlu, const double szer){
     m_dlu=dlu;
     m_szer=szer;
     count++;
     
     if(m_dlu <0){
        m_a = 'S';
        m_dlu=-m_dlu;
     }
     else
        m_a = 'N';
     if(m_szer <0){
        m_b = 'W';
        m_szer=-m_szer;
     }
     else
        m_b = 'E';
     
     cout<<"Num of points = "<<count<<", current Point ("<<m_dlu<<m_a<<", "<<m_szer<<m_b<<")"<<endl;

 }
        
        
MapPoint::~MapPoint(){
    count--;
    cout<<"Num of points = "<<count<<endl;
}
        
        
void MapPoint::print()const{
    cout<<"Point("<<m_dlu<<m_a<<", "<<m_szer<<m_b<<")"<<endl;

}
        
        
void MapPoint::move(const double a, const double b){
    m_dlu+=a;
    m_szer+=b;

}
        
        
MapPoint& MapPoint::furtherFrom(MapPoint &first,MapPoint &second) const{
    double len1,len2;

    len1=sqrt(first.m_dlu*first.m_dlu+first.m_szer*first.m_szer);
    len2=sqrt(second.m_dlu*second.m_dlu+second.m_szer*second.m_szer);

    if(len1>len2)
        return first;
    else 
        return second;
}
        
        
MapPoint MapPoint::inTheMiddle(const MapPoint &first, const MapPoint &second){
    double mid1, mid2;
    if(first.m_a==second.m_a)
        mid1=first.m_dlu+second.m_dlu;
    else
        mid1=first.m_dlu-second.m_dlu;
    mid1=mid1/2;
    if(first.m_b==second.m_b)
        mid2=first.m_szer+second.m_szer;
    else
        mid2=first.m_szer-second.m_szer;

    mid2=mid2/2;

    MapPoint x(mid1,mid2);
    return x;
}