#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int main(){
    int digitado,num,invertido,digito;
    cout << "Digite numero inteiro: "<<  endl;
    cin >> digitado;
    num = digitado;
    invertido = 0;
    while(num != 0){
        digito = num % 10;
        invertido = (invertido * 10) + digito;
        num = num / 10;
    }
    if(digitado == invertido)
        cout << "Palindromo !!!\n"<<  endl;
    else
        cout << "Nao é Palindromo!!!" <<  endl;

    return 0;
}