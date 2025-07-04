#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <iomanip>


using namespace std;

int main(){
    float nota[3][3];
    int matricula[3];
    float media[3];
    float valor_media = 0;

    // fazer em casa
    for(int i = 0; i <=2; i++) {
        cout << "Digite a matricula"<<  endl;
        cin >> matricula[i];
        for(int j = 0; j <=2; j++) {
            cout << "nota do aluno "<< j+1 << endl;
            cin >> nota[i][j];

        }
       
    }

    for(int i = 0; i <=2; i++) {
        cout <<"Matricula   " << "   nota01   " << "   nota02  "<<  "  nota03  " <<  "  media  " << endl;
        cout << "==================================================="  << endl;
        cout << matricula[i] << "     ";
        for(int j = 0; j <=2; j++) {
            cout << "     "<< nota[i][j] << "    ";
            valor_media = valor_media + nota[i][j] ;
   
        }
        media[i] = valor_media /3;
        valor_media = 0;
        cout << setprecision(3) <<media[i] << "    ";
        cout << endl;
    }


    return 0;
}