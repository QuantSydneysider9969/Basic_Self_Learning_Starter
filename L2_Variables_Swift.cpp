#include <iostream>

// I am gonna swift the value between a and b, how to do that wisely?
int main() {
    // best practice of initializing variables: data type + variable name + value
    int a = 1;
    int b = 2;
    int temp = a; // Use a temporary variable to extract the value from a
    a = b; // use a to extract value from b
    b = temp; // b extracts value from temporary variable
    std::cout << a;
    return 0;
}