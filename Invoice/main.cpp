#include <iostream>
#include <string>
#include "Invoice.h"

using namespace std;

int main(){

    int sair = 0,op;
    int num,qnt;
    float preco;
    string descricao;
    Invoice tech = Invoice();

    do{

     cout <<"1 = sair\n2 = exibir\n3 = getInvoiceAmount\n4 = editar"<<endl;
     cin >> op;
        switch(op){

        case 1:
            sair = 1;
            break;
        case 2:
            cout<<"Numero: "<<tech.getnum()<<endl;
            cout<<"Quantidade: "<<tech.getqnt()<<endl;
            cout<<"Preco: "<<tech.getpreco()<<endl;
            cout<<"Descricao: "<<tech.getdescricao()<<endl;
            break;

        case 3:
            cout <<"Faturamento: "<<tech.getInvoiceAmount()<<endl;
            break;
        case 4:
            printf("Numero: ");
            cin >> num;
            tech.setnum(num);
            printf("Quantidade:");
            cin >> qnt;
            tech.setqnt(qnt);
            printf("Preco: ");
            cin >> preco;
            tech.setpreco(preco);
            printf("Descricao: ");
            cin >> descricao;
            tech.setdescricao(descricao);
            break;
        default:
            cout << "op invalida" <<endl;

        }

    }while(!sair);

    return 0;
}
