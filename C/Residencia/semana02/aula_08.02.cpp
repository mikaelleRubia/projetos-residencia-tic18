#include <iostream>

using namespace std;


int main(void){

    char word[] = "hello";
    char name[30];

    cout << "Digite um nome ";
    cin.getline(name, 30);

    cout << word << ", "<< name << endl;


    return 0;

}