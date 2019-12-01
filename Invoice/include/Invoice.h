#ifndef INVOICE_H
#define INVOICE_H


class Invoice
{
    public:

        Invoice();

//---------sets-------------
        void setnum(int n);
        void setqnt(int q);
        void setpreco(float p);
        void setdescricao(std::string d);

//---------gets------------
        int getnum();
        int getqnt();
        float getpreco();
        std::string getdescricao();
        float getInvoiceAmount();

        private:

        int num,qnt;
        float preco;
        std::string descricao;

};

#endif // INVOICE_H
