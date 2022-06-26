#include <iostream>
#include <stdlib.h>
#include <locale.h>
#include <string>

class Usuario{
    private:

        int id;
        std::string nome;
        std::string cpf;
        std::string senha_login;
        std::string usuario_login;
        std::string dataNasc;
        std::string telefone;
        std::string uf;
        std::string ie;
    
    public:

    /*GETS*/

        int getId();
        std::string getNome();
        std::string getCpf();
        std::string getSenha_login();
        std::string getUsuario_login();
        std::string getDataNasc();
        std::string getTelefone();
        std::string getUf();
        std::string getIe();

    /*SETS*/

        void setId(int x);
        void setNome(int x);
        void setCpf(int x);
        void setSenha_login(int x);
        void setUsuario_login(int x);
        void setDataNasc(int x);
        void setTelefone(int x);
        void setUf(int x);
        void setIe(int x);

    /*METHODS*/
};

int Usuario:: getId(){
    return id;
}
std::string Usuario:: getNome(){
    return nome;
}
std::string Usuario::getCpf(){
    return cpf;
}
std::string Usuario::getSenha_login(){
    return senha_login;
}
std::string Usuario::getUsuario_login(){
    return usuario_login;
}
std::string Usuario::getDataNasc(){
    return dataNasc;
}
std::string Usuario::getTelefone(){
    return telefone;
}
std::string Usuario::getUf(){
    return uf;
}
std::string Usuario::getIe(){
    return ie;
}

void Usuario::setId(int x){
    id = x;
}
void Usuario:: setNome(int x){        
    nome = x;
}
void Usuario::setCpf(int x){
    cpf = x;
}
void Usuario::setSenha_login(int x){
    senha_login = x;
}
void Usuario::setUsuario_login(int x){
    usuario_login = x;
}
void Usuario::setDataNasc(int x){
    dataNasc = x;
}
void Usuario::setTelefone(int x){
    telefone = x;
}
void Usuario::setUf(int x){
    uf =x;
}
void Usuario::setIe(int x){
    ie = x;
}