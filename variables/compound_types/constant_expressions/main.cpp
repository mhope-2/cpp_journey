#include <iostream>

// define a constexpr function
constexpr int size(){
    return sizeof(1);
}

constexpr int i = 42; // type of i is const int
int j = 0;


int main(){
    constexpr int m = 20; // 20 is a constant expression
    constexpr int limit = m + 1; // m + 1 is a constant expression 
    constexpr int sz = size(); // ok only if size is a constexpr function

    std::cout << "sz: " << sz <<std::endl;

    constexpr int *np = nullptr; // np is a constant pointer to int that is null 

    constexpr const int *p = &i; // p is a constant pointer to the const int i  
    constexpr int *p1 = &j; // p1 is a constant pointer to the int j
    // i and j must be defined outside any function


    return 0; 
}