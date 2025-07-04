#include <iostream>

using namespace std;

int main(void){

    int quantidade ;

    cout << "quantos alunos dá na turma ?";
    cin >> quantidade;

    cout << "Há" << quantidade << "alunos dá na turma.\n";
    cout << "O tipo short int ocupa" << sizeof(short int) << "bytes na mémoria. \n";
    cout << "O tipo int ocupa" << sizeof(int) << "bytes na mémoria. \n";
    cout << "O tipo long int ocupa" << sizeof(long int) << "bytes na mémoria. \n";
    cout << "O tipo long long int ocupa" << sizeof( long long int) << "bytes na mémoria. \n";
    unsigned short int idade = 120; // o tipo unsigned char so armazena valores positivos
    cout<< " A idade é" << idade << endl;

    int valHexa = 0x1A;
    cout << "o valor da valHexa" << valHexa << " ou " << hex << valHexa << dec;
    cout << "em hexadecimal." << endl;

    long int valOctal = 032;
    
    bool valid = true;




    return 0;

}