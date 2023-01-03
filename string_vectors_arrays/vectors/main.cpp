#include <iostream>
#include <vector>
using std::vector;
using std::cin;
using std::cout;
using std::endl;

int main(){
    // vector initializations
    vector<int> ivec (10, 4);
    vector<int> v {1, 2, 3, 4};

    for (auto i : ivec){
        cout << i << endl;
    }
}
