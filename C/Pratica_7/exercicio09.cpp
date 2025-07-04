#include <iostream>

using namespace std;


int main() {
    int numero, primeiro = 0, segundo = 1, proximo = 0;


    cout << "Digite um número inteiro: ";
    cin >> numero;

    cout << "Sequência de Fibonacci até " << numero << ":" << endl;


    if (numero >= 1) {
        cout << primeiro << " ";
    }
    if (numero >= 2) {
        cout << segundo << " ";
    }

    for (int i = 3; i <= numero; i++) {
        proximo = primeiro + segundo;
        if (proximo <= numero) {
            cout << proximo << " ";
        } else {
            break;
        }
        primeiro = segundo;
        segundo = proximo;
    }

    cout << endl;

    return 0;
}