#include <iostream>

int main(){

    typedef double wages; // wages is a synonym for double
    typedef wages base, *p; // base is a synonym for double, p for double*

    base per_month = 100.01;

    std::cout << "base per month: " << per_month << std::endl; 

    return 0;
}