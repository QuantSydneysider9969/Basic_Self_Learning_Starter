#include <iostream>

using namespace std;
// This is the complement of L7.6
// I request user to input string to select their order in the cafe

int main () {
    string choice;
    cout << "Input your order here: (tea/coffee/orange juice): ";
    cin >> choice;
    
    if (choice == "tea") {
        cout << "You ordered tea!";
    } else if (choice == "coffee") {
        cout << "You ordered coffee!";
    } else if (choice == "orange juice") {
        cout << "You ordered orange juice!";
    }
    return 0;
}