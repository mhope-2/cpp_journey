#include <iostream>
#include <cassert>

// Define the function that we want to test
int add(int a, int b) {
    return a + b;
}

int main() {
    // Define some test cases
    int test1_a = 5;
    int test1_b = 10;
    int expected_result1 = 15;

    int test2_a = -10;
    int test2_b = 15;
    int expected_result2 = 5;

    // Call the function for each test case and check the result
    assert(add(test1_a, test1_b) == expected_result1);
    assert(add(test2_a, test2_b) == expected_result2);
}
