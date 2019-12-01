#include <iostream>
#include <string>
#include "Invoice.h"

//----------sets---------------
void Invoice::setnum(int n){
    num = n;
}
void Invoice::setqnt(int q){

    if(q < 0){
        qnt = 0;
    }else{
        qnt = q;
    }

}
void Invoice::setpreco(float p){

    if(p < 0){
        preco = 0.0;
    }else{
        preco = p;
    }
}
void Invoice::setdescricao(std::string d){
    descricao = d;
}

//------------gets--------------

int Invoice::getnum(){
    return num;
}
int Invoice::getqnt(){
    return qnt;
}
float Invoice::getpreco(){
    return preco;
}
std::string Invoice::getdescricao(){
    return descricao;
}

float Invoice::getInvoiceAmount(){
    return (qnt * preco);
}

//-------- Constutor -----------
Invoice::Invoice()
{
     setnum(1);
     setqnt(3);
     setpreco(50) ;
     setdescricao("Massa");

}

