#include <iostream>
#include <stdlib.h>
#include <locale.h>
#include <string>

class Data{
    private:

        std::string data;
        unsigned int dia;
        unsigned int mes;
        unsigned int ano;

    public:
        std::string getData();
        unsigned int getDia();
        unsigned int getMes();
        unsigned int getAno();

        void setData(std::string);
        void setDia(unsigned int x);
        void setMes(unsigned int x);
        void setAno(unsigned int x);


    /*METHODS*/
        void constroiData();
};

/*GET*/

std::string Data::getData(){
    return data;
}
unsigned int Data::getDia(){
    return dia;
}
unsigned int Data::getMes(){
    return mes;
}

unsigned int Data::getAno(){
    return ano;
}

/*SETS*/

void Data::setData(std::string string){
    data = string;

}
void Data::setDia(unsigned int x){
    dia = x;
}
void Data::setMes(unsigned int x){
    mes = x;
}

void Data::setAno(unsigned int x){
    ano = x;
}

void Data::constroiData(){
    std::string dia_string = std::to_string(Data::getDia());
    std::string mes_string = std::to_string(Data::getMes());
    std::string ano_string = std::to_string(Data::getAno());
    std::string dataCompleta = dia_string + "/" + mes_string + '/' + ano_string;

    Data::setData(dataCompleta);
}


