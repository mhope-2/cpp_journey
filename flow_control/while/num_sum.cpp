#include <iostream>

using namespace std;

int main(){
    // while loop
    int sum = 0;
    int counter = 1;
    while (counter <= 10){
        sum += counter;
        counter++;
    }

    cout << "the sum from 1 - 10 inclusive is " << sum << endl;
}