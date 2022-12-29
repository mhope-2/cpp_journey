#include <iostream>

int f(){
    return 1 + 1;
}

int main(){

    typedef double wages; // wages is a synonym for double
    typedef wages base, *p; // base is a synonym for double, p for double*

    base per_month = 100.01;

    std::cout << "base per month: " << per_month << std::endl; 

    // The decltype Type Specifier
    decltype (f()) sum = 3; // sum has whatever type f returns - int
    std::cout << "sum is: " << sum << std::endl;

    const int ci = 0, &cj = ci;
    decltype(ci) x = 0; // x has type const int
    decltype(cj) y = x; // y has type const int& and is bound to x
    // decltype(cj) z; // error: z is a reference and must be initialized

    auto var = cj; // var is a plain int

    // decltype of an expression can be a reference type
    int i = 42, *px = &i, &r = i;
    decltype(r + 0) b; // ok:addition yields an int; b is an (uninitialized) 
    // int decltype(*p) c; // error: c is int& and must be initialized

    std::cout << "r is: " << r << std::endl;

    // decltype of a parenthesized variable is always a reference 
    // decltype((i)) d; // error: d is int& and must be initialized 
    decltype(i)e; // ok: e is an (uninitialized) int
        
     

    return 0;
}