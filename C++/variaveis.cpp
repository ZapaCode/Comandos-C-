#include <iostream>

using namespace std;

int main(){

    //TIPO NOME;
    //TIPO NOME = VALOR;

    char letra; //B (recebe uma letra)
    int vidas; //10, 25 
    double decimal; //2,49999999999
    float decimal2; //2,5
    bool vivo; //true and false
    string nome; //recebe um texto

    cout << "Digite o numero de vidas: ";
    cin >> vidas;

    cout << "Digite uma letra: ";
    cin >> letra;

    cout << "Dinheiro: ";
    cin >> decimal;

    cout << "Digite seu nome: ";
    cin >> nome;

    cout << "Seu numero de vidas e " << vidas << endl;
    cout << "Sua letra " << letra << endl;
    cout << "Sua quantia e " << decimal << endl;
    cout << "Seu nome e " << nome << endl;


    return 0;
}