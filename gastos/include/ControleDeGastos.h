#ifndef CONTROLEDEGASTOS_H
#define CONTROLEDEGASTOS_H
#include "Despesa.h"


class ControleDeGastos
{
    public:

        void setDespesa(Despesa d, int pos);
        double calculaTotalDeDespesas();
        bool existeDepesaDoTipo(std::string tipodesp);
     
    private:
        Despesa despesas[2];

};

#endif // CONTROLEDEGASTOS_H
