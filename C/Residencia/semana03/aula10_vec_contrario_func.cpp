#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {

    vector<int> vec{1,9,3,12,5,6,7,8};

    for( auto x = vec.begin(); 
            x != vec.end(); x++){
        cout << *x << endl;
    }
    cout << "--------------------------"<< endl;

    for( auto x = vec.rbegin();
            x != vec.rend(); x++){
        cout << *x << endl;
    }


    return 0;
}