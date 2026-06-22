#include <iostream>

using namespace std;

// break and default keywords are optional
int main() {
    int day;
    cin >> day;
    // Switch is a classification tool, similar (but not equal) to elif in python
    // if there's a match with "day", the associated block of code will be executed,
    // so this is a faster logic than elif
    // because of the "break", you are not requried to code "return 0;" at the end of the main function
    switch (day) {
        // case "1" is corresponding to the value of user input
        // switch only accepts integer, i.e. you cannot code "case "Monday":"
        // if you like to classify by string vale, you should use else if (see L7.6)
        case 1:
        cout << "Monday";
        break;
        case 2:
        cout << "Tuesday";
        break;
        case 3:
        cout << "Wednesday";
        break;
        case 4:
        cout << "Thursday";
        break;
        case 5:
        cout << "Friday";
        break;
        case 6:
        cout << "Saturday";
        break;
        case 7:
        cout << "Sunday";
        break;
    }
}