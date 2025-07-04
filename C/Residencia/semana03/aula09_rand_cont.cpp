#include <iostream>
#include <cstdlib>
#include <ctime>



using namespace std;

int main() {

    srand(static_cast<unsigned>(time(nullptr)));

    int array[100];
    int ind;


    for (int i = 0; i < 100; i++) {
        array[i] = rand() % 20 + 1;
    }


    int contagem[20] = {0}; 

    for (int i = 0; i < 100; i++) {
        int valor = array[i];
        contagem[valor - 1]++; 

    }
    cout << "Contagem de repetições de cada valor:" << endl;
    for (int i = 0; i < 20; i++) {
        cout << "Valor " << (i + 1) << ": " << contagem[i] << " vezes" << endl;
    }


    return 0;
}
