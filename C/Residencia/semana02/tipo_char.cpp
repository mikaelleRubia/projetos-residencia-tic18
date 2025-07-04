#include <iostream>
#include <cfloat>
#include <cctype>

using namespace std;


int main(void){

    char nome, ch2, ch3;
    string retorno;

    cout << "Digite algo: ";
    cin >> nome;

    cout << "Digite uma letra de minusculo: ";
    cin >> ch2;
    ch3 = toupper(ch2);

    cout << ch3 << endl;


    retorno = isupper(nome) ? "maiuscula: ": islower(nome) ? "minusculo:" : isdigit(nome) ? "digito" : "outro tipo"; 

    cout << retorno << endl;



    return 0;

}