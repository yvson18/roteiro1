#include <iostream>
#include <string>
#include "include\Despesa.h"
#include "include\ControleDeGastos.h"

using namespace std;

int main()
{

    ControleDeGastos d;
    Despesa d1,d2;
    d1.setValor(150);
    d1.setTipoValor("Luz");
    d2.setValor(160);
    d2.setTipoValor("agua");

    d.setDespesa(d1,0);
    d.setDespesa(d2,1);

    cout<<d.calculaTotalDeDespesas()<<endl;

    return 0;
}
