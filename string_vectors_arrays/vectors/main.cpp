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
    
    vector<int>::iterator it; // it can read and write vector<int> elements 
    string::iterator it2; // it2 can read and write characters in a string
    vector<int>::const_iterator it3; // it3 can read but not write elements 
    string::const_iterator it4; // it4 can read but not write characters

    // compute an iterator to the element closest to the midpoint of vec 
    auto mid = vec.begin() + vec.size() / 2;
    cout << "mid: " << *mid << endl;

        

}

