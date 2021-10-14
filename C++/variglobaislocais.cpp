#include <iostream>

using namespace std;

int n1, n2; //variaiveis globais

int main(){

    int n3, n4; //variaveis locais
    int res1, res2;

    //operadores matematicos: + - / * % ()

    n1=11;
    n2=3;
    n3=5;
    n4=2;

    res1= n1/n2;
    res2=n1%n2;

    cout << "Divisao: " << res1 << endl;
    cout << "Resto: " << res2 << endl;

    return 0;
}