#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int media =0;
    int valor;
    string resposta;
    vector<int> vec;


    for(int i = 0; i <=10; i++) {
        
        cout << "digite um valor:" << endl;
        cin >> valor;
        
        vec.push_back(valor);

        cout << "Digite 'sim' para continuar com outro valor" << endl;
        cin >> resposta;
        if (resposta != "sim"){
            break;
        }

    }


    for( int x: vec){
        cout << x << endl;
        media += x;
    }
    cout << "media "<< (media/vec.size()) << endl;



    return 0;
}