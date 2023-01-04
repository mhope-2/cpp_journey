#include <iostream>
#include <vector>
using std::vector, std::string, std::cin, std::cout, std::endl;


int main(){
    // vector initializations
    vector<int> ivec (10, 4);
    vector<std::string> svec (10);
    vector<int> v {1, 2, 3, 4};

    for (auto i : v){
        cout << i << endl;
    }

    // push_back
    vector<int> v2;
    for (int i = 0; i < 100; ++i)
        v2.push_back(i);
    
    
    for (auto i : v2) 
        cout << i << endl;

    vector<double> dvec {2.23, 2.32, 5.34};

    // Iterators
    string s("some string"); 
    if(s.begin() != s.end()){ // make sure s is not empty
        auto it = s.begin(); // it denotes the first character in s
        *it = toupper(*it); // make that character uppercase 
    }

    // double vec elements
    vector<int> vec {1, 2, 8, 5, 4};
    for (auto i = vec.begin(); i != vec.end(); ++i){
        *i = *i * 2;
    }

    for (auto i :  vec)
        cout << "vec: " << i <<  endl;
        

}

