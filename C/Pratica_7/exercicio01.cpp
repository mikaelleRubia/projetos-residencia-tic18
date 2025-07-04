#include <string>
#include <iostream>

using namespace std;

int main() {
    for(int i = 1; i <= 100; i++) {

        if(i%3 == 0 && i%5 == 0){
            cout << "FizzBuzz ->" << i <<  endl;
        }
        if(i%3 == 0){
            cout << "Fizz ->" << i << endl;
        }
        if(i%5 == 0){
            cout << "Buzz ->" << i << endl;
        }

    }

    return 0;
}