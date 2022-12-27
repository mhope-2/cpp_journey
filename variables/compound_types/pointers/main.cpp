#include <iostream>

int main(){
    int ival2 = 42;
    int *p;

    std::cout << "p: " << p << std::endl;

    int zero = 0;
    int pi = zero;

    std::cout << "pi: " << pi << std::endl;

    int a = 0, b = 1;
    int *p1 = &a, *p2 = p1;

    std::cout << "*p1: " << *p1 << " &  "<< *p2 << std::endl;

    const int *const p3 = &a;  // legal.
    std::cout << "p3: " << p3 << std::endl;
    
    const int ci = 42;
    const int &r = ci;

    std::cout << "r: " << r << std::endl;

    // constant expressions

    

}