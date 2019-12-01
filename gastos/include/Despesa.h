#ifndef DESPESA_H
#define DESPESA_H


class Despesa
{
    public:
//---------Construtor-----------
         Despesa();
//-----------Gets---------------
        double getValor();
        std:: string getTipoValor();
//-----------Sets---------------
        void setValor(double v);
        void setTipoValor(std::string tV);
//---------Atributos------------
    private:
        double valor;
        std::string tipoValor;

};

#endif // DESPESA_H
