#ifndef EMPREGADO_H
#define EMPREGADO_H


class Empregado{
    public:
        Empregado(std::string n,std::string So,float s);
        std::string getNome();
        std::string getSobrenome();
        float getSalario();
        float getSalarioAnual();
        void setNome(std::string n);
        void setSobrenome(std::string So);
        void setSalario(float s);
        void setSalarioAumento();
     private:
         std::string nome;
         std::string sobrenome;
         float salario;


};

#endif // EMPREGADO_H
