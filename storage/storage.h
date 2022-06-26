#include "empresarial/parent/Usuario.h"


class SalvaDados: public Usuario{
    public:
        void salvarTudo();
};
void SalvaDados :: salvarTudo(){
    SalvaDados::setNome(Usuario::getNome());
    SalvaDados::setCpf(Usuario::getCpf());
    SalvaDados::setIe(Usuario::getIe());
    SalvaDados::setSenha_login(Usuario::getSenha_login());
    SalvaDados::setUsuario_login(Usuario::getUsuario_login());
    SalvaDados::setUf(Usuario::getUf());
    SalvaDados::setTelefone(Usuario::getTelefone());
    SalvaDados::setDataNasc(Usuario::getDataNasc());
}

