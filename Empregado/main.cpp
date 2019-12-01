#include <iostream>
#include <string>
#include "Empregado.h"

using namespace std;

int main(){

    int sair = 0,op;
    string nome, sobrenome;
    float salario;

    Empregado emp[2] = Empregado("","",0.0);

        do{
                cout << "Digite a op:\n1 = Exibir\n2= Editar\n3 = Exibir Salario anual\n4 = aumento\n5 = sair";
                cin >> op;

                switch(op){

                case 1:
                    for(int i  = 0 ; i < 2; i++){
                       cout << emp[i].getNome()<<endl;
                       cout << emp[i].getSobrenome()<<endl;
                       cout << emp[i].getSalario()<<"\n"<<endl;
                        }
                    break;
                case 2:
                    for(int i  = 0 ; i < 2; i++){

                       cout << "Nome: "<<endl;
                       cin>>nome;
                       emp[i].setNome(nome);
                       cout << "Sobrenome: ";
                       cin>>sobrenome;
                       emp[i].setSobrenome(sobrenome);
                       cout<< "Salario: ";
                       cin >>salario;
                       emp[i].setSalario(salario);

                    }
                    break;
                case 3:
                       for(int i = 0; i < 2; i++){
                        cout <<"Salario anual: "<< emp[i].getSalarioAnual()<<endl;
                        }
                    break;
                case 4:
                    for(int i = 0; i < 2; i++){
                            emp[i].setSalarioAumento();
                        }
                    break;
                case 5:
                    sair = 1;
                    break;
                default:
                    cout << "op invalida";

                }


            }while(!sair);


    return 0;
}
