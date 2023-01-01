#include <iostream>
#include <vector>
using std::vector;
using std::cin;
using std::cout;
using std::endl;

int main(){
    // print out vecor elements
    vector<int> v {1, 2, 3, 4};

    for (auto i : v){
        cout << i << endl;
    }
}
