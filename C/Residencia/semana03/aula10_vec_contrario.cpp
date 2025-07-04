#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {

    vector<int> vec{1,2,3,4,5,6,7,8};

    for( auto x = vec.begin(); 
            x != vec.end(); x++){
        cout << *x << endl;
    }
    cout << "--------------------------_"<< endl;

    for( auto x = vec.end() -1;
            x != vec.begin()-1; x--){
        cout << *x << endl;
    }


    return 0;
}