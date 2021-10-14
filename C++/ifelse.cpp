#include <iostream>
#include <cstdlib>

using namespace std;

int main(){

    int num1;
    int num2;
    char opc;
    int res;

    inicio:

    system("cls"); //serve para limpar a tela

    cout << "Digite o valor da nota 1: ";
    cin >> num1;

    cout << "Digite o valor para a nota 2: ";
    cin >> num2;

    res=num1+num2;
    
    if (res >= 60){
        cout << "\nAluno Aprovado \n";
    }else if (res >= 40){
        cout << "\nAluno em Recuperaçao\n";
    } else{
        cout << "Aluno Reprovado";
    }

    cout << "\nDigitar outras notas? [s/n]: ";
    cin >> opc;

    if (opc == 's' or opc == 'S'){
        goto inicio; //goto serve para reiniciar o programa novamente
    }
    

    return 0;
}