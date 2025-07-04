#include <cstdlib>
#include <iostream>
#include <ctime>

using namespace std;

int main(){


    srand(static_cast<unsigned>(time(nullptr)));
    int valor_digitado[100];
    int valor_random= 0;

  

    for (int i = 0; i <100;i++){

        valor_random = rand()%20 +1;
        valor_digitado[i] = valor_random;

        cout << " numero "<< i+1 << " aleatorio: " <<valor_digitado[i]  <<endl;

    }   

    return 0;
}