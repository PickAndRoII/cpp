#include "ciagi.h"

Ciag utworzCiag(float pier, int dlu, float ilo){   
    Ciag tab;                                       
    tab=(float*)malloc(dlu*sizeof(float));          
    tab[0]=pier;                
    for(int i=1;i<dlu; i++)
        tab[i]=tab[i-1]*ilo;
    return tab;
}



void wypiszCiag(Ciag geo,int rozmiar ){     
    for(int i=0; i<rozmiar; i++)
        printf("%1.0f ", geo[i]);
    printf("\n");
}

float sumaLiczb(int dlu, Ciag geo){         
    float suma=0;
	for (int i = 0; i < dlu; i++) {
		suma = suma + geo[i];
	}
    return suma;
}
float iloczynLiczb(int dlu, Ciag geo){
    float iloczyn=1;
	for (int i = 0; i < dlu; i++) {
		iloczyn = iloczyn * geo[i];
	}
	return iloczyn;

}
float maximumLiczb(int dlu, Ciag geo){
    float max=geo[0];
    for(int i=1; i<dlu; i++){
        if(geo[i]>max){
            max=geo[i];
        }
    }
    return max;
}

float minimumLiczb(int dlu, Ciag geo){
    float min=geo[0];
    for(int i=1; i<dlu; i++){
        if(geo[i]<min){
            min=geo[i];
        }
    }
    return min;
}


void zbadajIWypisz( Funkcja fun, Ciag geo, int rozmiar){
    printf("%1.0f\n",fun(rozmiar,geo));
}

float badajCiag( Funkcja fun, Ciag geo, int rozmiar ){
    float suma=0;
    suma = fun(rozmiar, geo);
    return suma;
}

char znakCiagu(Ciag geo, int rozmiar ){  
    int plusy=0,minusy=0;                 
    for(int i=0; i<rozmiar; i++){        
        if(geo[i]>=0)                    
            plusy=plusy+1;               
        if(geo[i]<0)
            minusy=minusy+1;
    }
    if(plusy!=0 && minusy!=0)
        return '0';
    else if(minusy==0)
        return '+';
    else if(plusy==0)
        return '-';

}

void zniszczCiag(Ciag const *geo){
    free(*geo);
}


