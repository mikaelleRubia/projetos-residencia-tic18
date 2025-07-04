#include <iostream>


using namespace std;


int main() {
    int altura;


    cout << "Digite a altura do padrao: ";
    cin >> altura;


    if (altura <= 0) {
        cout << "A altura deve ser um número inteiro positivo." << endl;
        return 1;
    }


    cout << "Padrao 1:" << endl;
    for (int i = 1; i <= altura; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    cout << "Padrao 2:" << endl;
    for (int i = 1; i <= altura; i++) {
        for (int j = 0; j <= altura; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    cout << "Padrao 3:" << endl;

    for (int i = 1; i <= altura; i++) {
            if (i == 1 || i == altura) {
                for (int j = 1; j <= altura; j++) {
                    cout << "*";
                }
            } else {
                cout << "*";
                for (int j = 2; j < altura; j++) {
                    cout << " ";
                }
                cout << "*";
            }
            cout << endl;
        }

    return 0;
}