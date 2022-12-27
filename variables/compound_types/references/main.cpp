#include <iostream>

int main(){
    int ival = 1024;
    int &refVal = ival; // refVal refers to (is another name for) ival

    std::cout << ival << std::endl;
    std::cout << &refVal << std::endl;

}