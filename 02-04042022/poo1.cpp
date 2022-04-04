/*programa para trabalhar com orientação ao objeto. usando classe e objetos
*/

#include <iostream>
/*chamada da biblioteca std*/
using std:: cout;
using std::cin;

class texto{
    public:
    void mensagem1(){
         cout << "\nola!\n";
    }
    public:
    void mensagem2(){
         cout << "\nbom dia!\n";
    }
};
int main(){
    texto txt;
    txt.mensagem1();
    txt.mensagem2();

    return 0;
}  