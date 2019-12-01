#include <iostream>
#include <string>
#include "ControleDeGastos.h"


double ControleDeGastos::calculaTotalDeDespesas(){
    double soma = 0;

        for(int i = 0; i < 2; i++){
            soma += despesas[i].getValor();
        }

    return soma;
}
bool ControleDeGastos::existeDepesaDoTipo(std::string tipodesp){

    bool state;

    for(int i  = 0; i < 2; i++){
       if(tipodesp == despesas[i].getTipoValor()){
           state = true;
       }else{
           state = false;
       }
    }
    return state;

}

void ControleDeGastos::setDespesa(Despesa d, int pos){
    despesas[pos] = d;
}

