#include <iostream>
#include <string>
#include "Empregado.h"




void Empregado::setNome(std::string n){
    nome = n;
}
void Empregado::setSobrenome(std::string So){
    sobrenome = So;
}
void Empregado::setSalario(float s){

    if(s >= 0){
        salario = s;
   }

}

void Empregado::setSalarioAumento(){
    salario = salario*1.1;
}
std::string Empregado::getNome(){
    return nome;
}
std::string  Empregado::getSobrenome(){
    return sobrenome;
}
float  Empregado::getSalario(){
    return salario;
}
float  Empregado::getSalarioAnual(){
    return salario*12;
}



Empregado::Empregado(std::string n,std::string So,float s){

    setNome(n);
    setSobrenome(So);
    setSalario(s);
}

