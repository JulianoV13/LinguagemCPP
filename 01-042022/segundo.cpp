#include <iostream>

int main(){

    int n1 = 0;
    int n2 = 0;
    int n3 = 0;

    std::cout << "entre com um numero\n";
    std::cin >> n1;
    std::cout << "entre com outro numero\n";
    std::cin >> n2;
    n3 = n1 + n2;
    std::cout <<"o resultado e:" << n3 <<"\n";
    
    return 0;
}