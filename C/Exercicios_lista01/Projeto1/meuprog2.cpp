#include <string>
#include <iostream>
#include <stdlib.h>
#include <locale.h>

using namespace std;
// Exercício 4: Criando outro programa básico

void calculadora(float  valor01, float  valor02){

    cout << "Soma = " << valor01 + valor02  << "\n";
    cout << "Divisao = "<< valor01 / valor02 << "\n";
    cout << "Multiplicacao = "<< valor01 * valor02 << "\n";
    cout << "Subtracao = "<< valor01 - valor02 << "\n";
    cout << "Resto = "<< valor01 - valor02 << "\n";

}
int  main(void){

    float  numero1, numero2;
    cout << "Digite um numero float:";
    cin >> numero1;
    cout << "Digite outro numero float:";
    cin >> numero2;
    // cin >> valor02;

    calculadora(numero1, numero2);

    return 0;

}