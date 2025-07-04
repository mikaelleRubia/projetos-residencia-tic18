#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int main(){

    int digitado;
    cout << "Digite numero inteiro: "<<  endl;
    cin >> digitado;
    cout << endl;

    for(int i = 1; i <=digitado; i++) {

        if(digitado%i == 0){
            cout << i <<  endl;
        }

    }

    return 0;
}