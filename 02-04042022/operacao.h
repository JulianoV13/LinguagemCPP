#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::string;

class operacoes{
    public:
        void cadastro(string nome, string senha, string email,string nivel){
            cout<< "cadastro de usuario realizado\n";
        }
        string login(string nome, string senha){
            return "seja bem vindo!\n";
        }
        string trocarsenha(string nome,string senha){
            return "senha alterada\n";
        }
};