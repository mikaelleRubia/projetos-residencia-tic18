#include <iostream>
#include <cmath>


using namespace std;

int main() {
    int numero, original, resultado = 0, n = 0;


    cout << "Digite um numero inteiro: ";
    cin >> numero;

    original = numero;


    while (original != 0) {
        original /= 10;
        n++;
    }

    original = numero;


    while (original != 0) {
        int digito = original % 10;
        resultado += pow(digito, n);
        original /= 10;
    }


    if (resultado == numero) {
        // 370, 407
        cout << numero << " é um numero Armstrong." << endl;
    } else {
        cout << numero << " nao é um numero Armstrong." << endl;
    }

    return 0;
}