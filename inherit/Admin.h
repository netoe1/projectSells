#include "../parent/Usuario.h"

class Admin:public Usuario{
    private:
        std::string usuario;
        std::string senha;

    public:
        std::string getUsuario();
        std::string getSenha()
        void setUsuario(int x);
        void setSenha(int x);
    
};

std::string Admin :: getUsuario(){
    return usuario;
}
std::string Admin :: getSenha(){
    return senha;
}



void Admin::setUsuario(int x)
{
    usuario = x;
}
void Admin::setSenha(int x){
    senha = x;
}

