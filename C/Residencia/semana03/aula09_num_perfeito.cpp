#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int main(){

    int digitado;
    int soma_digitado = 0;
    cout << "Digite numero inteiro: "<<  endl;
    cin >> digitado;
    cout << endl;

    for(int i = 1; i <=digitado; i++) {

        if(digitado%i == 0){
            soma_digitado = soma_digitado + i;

        }
    }

    if((soma_digitado-digitado) == digitado){
        cout << digitado << " é perfeito " <<  endl;
    }else{
        cout << digitado << " nao é perfeito " <<  endl;
    }

    return 0;
}