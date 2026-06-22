#include <iostream>

// the error is deliberately set
int main() {
    // const is a command to set a variable to be 'constant'
    // this can prevent the developer accidentally change the value in further operation
    // double = float in PY
    const double pi = 3.1444;
    // the accident is below, you wanna update the variable 'pi'
    pi = 0
    std::cout << pi
    return 0
}