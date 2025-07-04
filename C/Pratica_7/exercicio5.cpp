#include <cstdlib>
#include <iostream>
#include <ctime>

using namespace std;

int main(){

    int valor_digitado, valor_random= 0;
    srand(time(0));
    valor_random = rand()%100 +1;
    cout << valor_random << endl;

    for (int i = 1; i <5;i++){

        cout << "Digite numero inteiro: "<<  endl;
        cin >> valor_digitado;

        if (valor_random == valor_digitado) {
            cout << "Acertou!!!" << endl;
            break;
        }
        if(valor_digitado >= (valor_random + 1) || valor_digitado > (valor_random + 5)) {
            cout << "chegou perto" << endl;
            
        }
        if(valor_digitado > (valor_random + 10)) {
                cout << "ta bem longe" << endl;
               
        }

        cout << endl;

    }   

    return 0;
}