#include "Fun.h"
#include <iostream>
int Fun::a=0;
int Fun::b=0;
int Fun::count=0;

Rational Fun::Add(Rational fir, Rational sec){
    Rational third;
    third.m_l=fir.m_l*sec.m_m+sec.m_l*fir.m_m;
    third.m_m=fir.m_m*sec.m_m;
    int x=Nwd(third.m_l, third.m_m);
    third.m_l=third.m_l/x;
    third.m_m=third.m_m/x;
    return third;
}

Rational Fun::Multiply(Rational fir, Rational sec){
    Rational third;
    third.m_l=fir.m_l*sec.m_l;
    third.m_m=fir.m_m*sec.m_m;
    int x=Nwd(third.m_l, third.m_m);
    third.m_l=third.m_l/x;
    third.m_m=third.m_m/x;
    return third;
}

Rational Fun::Divide(Rational fir, Rational sec){
    Rational third;
    third.m_l=fir.m_l*sec.m_m;
    third.m_m=fir.m_m*sec.m_l;
    int x=Nwd(third.m_l, third.m_m);
    third.m_l=third.m_l/x;
    third.m_m=third.m_m/x;
    return third;
}

int Fun::Nwd(int a, int b){
    int c;
    if(b>a){
        int tmp=a;
        a=b;
        b=tmp;}
    while(b!=0){
        c=a%b;
        a=b;
        b=c;
    }
    return a;
}

void Fun::Average(Rational one){
    count++;
    if (count==1){
        a=one.m_l;
        b=one.m_m;}
    else {
        a=(a*one.m_m+b*one.m_l);
        b=(b*one.m_m);}
        
  }

Rational Fun::Average(){
    b=b*count;
    Rational one(a,b);
    return one;
}