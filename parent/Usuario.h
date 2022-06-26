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
        void setNome(std::string x);
        void setCpf(std::string x );
        void setSenha_login(std::string x);
        void setUsuario_login(std::string x );
        void setDataNasc(std::string x );
        void setTelefone(std::string x);
        void setUf(std::string x);
        void setIe(std::string x);

    /*METHODS*/

    void definirLogin();
};

/*GET*/

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

/*SET*/

void Usuario::setId(int x){
    id = x;
}
void Usuario::setNome(std::string x){        
    nome = x;
}
void Usuario::setCpf(std::string x){
    cpf = x;
}
void Usuario::setSenha_login(std::string x){
    senha_login = x;
}
void Usuario::setUsuario_login(std::string x){
    usuario_login = x;
}
void Usuario::setDataNasc(std::string x){
    dataNasc = x;
}
void Usuario::setTelefone(std::string x){
    telefone = x;
}
void Usuario::setUf(std::string x){
    uf =x;
}
void Usuario::setIe(std::string x){
    ie = x;
}
