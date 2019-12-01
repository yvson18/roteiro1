#include <iostream>
#include <string>
#include "Data.h"

using namespace std;

int main(){

    int dia,mes,ano,sair = 0,op;

    cout<<"Digite sua data"<<endl;
    cin >> dia;
    cin >> mes;
    cin >> ano;

    Data dt1 = Data(dia,mes,ano);

    if(dt1.dia != 0){

        do{

          cout << "O que deseja fazer?\n\n<sair = 1\navancar dia  = 2\nExibir data = 3"<<endl;
          cin >> op;
            switch(op){

            case 1:
                sair = 1;
                break;
            case 2:
                dt1.avancarDia(dt1.dia,dt1.mes,dt1.ano);
                break;
            case 3:
                cout << "Dia: "<<dt1.dia<<" Mes: "<<dt1.mes<<" Ano: "<< dt1.ano<<endl;
                break;

            default:
                cout << "op invalida"<<endl;
                break;
            }

        }while(!sair);

    }else{
        cout << "Data invalida"<<endl;
    }

return 0;
}
