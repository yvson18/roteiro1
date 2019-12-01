#include <iostream>
#include <string>
#include "Despesa.h"

void Despesa::setValor(double v){
    valor = v;
}
void Despesa::setTipoValor(std::string tipoValor){
   this->tipoValor = tipoValor;
}
double Despesa::getValor(){
    return valor;
}
std::string Despesa::getTipoValor(){
    return tipoValor;
}

Despesa::Despesa(){}
