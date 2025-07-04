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


    return 0;
}