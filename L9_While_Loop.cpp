#include <iostream>

using namespace std;

// do/while is a loop that ask the computer do sth while (condition) is met
// you can soley operate the while loop in the same semantic of if (condition) {}
int main() {
    int i;
    cout << "Please enter a value less than 5:";
    cin >> i;
    if (i < 5) {
        do {
        cout << i << "\n";
        i++;
        } while (i < 5);
    } else {
        cout << "The values is greater than 5, sorry! Restart the program!";
    }
    return 0;
}
