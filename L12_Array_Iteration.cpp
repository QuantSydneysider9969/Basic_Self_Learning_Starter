#include <iostream>
#include <vector>
using namespace std;


// However, two major differences between lists and vectors are:

// You can add and remove elements from both the beginning and at the end of a list, while vectors are generally optimized for adding and removing at the end.

// Unlike vectors, a list does not support random access, meaning you cannot directly jump to a specific index, or access elements by index numbers.

int main() {
    // Create a vector called cars that will store strings
    vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

    // Print vector elements
    for (string car : cars) {
    cout << car << "\n";
    }
    return 0;
}
