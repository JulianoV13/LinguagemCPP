#include <iostream>
#include "usuario.h"
#include "operacao.h"
int main(){
    system("clear");
    usuario us;
    operacoes op;
    us.nome = "joao";
    us.email = "joao@terra.com.br";
    us.senha = "123";
    us.nivel = "admin";
    op.cadastro(us.nome,us.email,us.senha,us.nivel);

    return 0;
}