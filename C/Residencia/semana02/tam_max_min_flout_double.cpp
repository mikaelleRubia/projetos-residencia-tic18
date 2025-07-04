#include <iostream>
#include <cfloat>
#include <cmath>
#include <iomanip>

using namespace std;


int main(void){



    cout << "Tamanho Maximo: " << FLT_MAX << endl;
    cout << "Tamanho Minimo: " << FLT_MIN << endl;
    cout << "Tamanho Maximo: " << DBL_MAX << endl;
    cout << "Tamanho Minimo: " << DBL_MIN<< endl;


    float pi = M_PIl;
    double  pi_double = M_PIl; 
    double long  pi_double_long = M_PIl; 

    cout << "Valor Maximo do pi float: " << setprecision(FLT_MAX) << pi << endl;
    cout << "Valor Maximo do pi double: " << setprecision( DBL_MAX) << pi_double << endl;
    cout << "Valor Maximo do pi double long : " << setprecision( DBL_MAX) << pi_double_long << endl;

    
    cout << "Valor 2 do pi double: " << setprecision(3) << pi_double << endl;
    cout << "Valor 4 do pi double: " << setprecision(5) << pi_double << endl;
    cout << "Valor 8 do pi double: " << setprecision(9) << pi_double << endl;
    cout << "Valor 16 do pi double: " << setprecision(17) << pi_double << endl;


    return 0;

}