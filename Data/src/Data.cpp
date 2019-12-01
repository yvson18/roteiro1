#include <iostream>
#include <string>
#include "Data.h"

Data::Data(int d, int m, int a){

    if((d >= 1 && d <= 31) && (m>= 1 && m<=12)){
        dia = d;
        mes = m;
        ano = a;

    }else{
        dia = 0;
        mes = 0;
        ano = 0;
    }

}

void Data::avancarDia(int d , int m, int a){

     dia  = d + 1;
     if(dia > 31){
        mes = m + 1;
        dia = 1;

     }if(mes > 12){
        mes = 1;
        dia = 1;
        ano = a + 1;
     }
}
