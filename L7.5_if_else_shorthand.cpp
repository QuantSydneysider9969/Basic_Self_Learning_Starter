#include <iostream>

using namespace std;

int main() {
    int time = 20;
    int distance = 100;
    // string is the data type for text 
    // Below is the shorthanded if/else, you can denote the variable is be a condition 
    // where "?" represents "if" and ":" represents "else"
    string result = (time > 18) ? "Good day." : "Good evening.";
    cout << result;
    // ultimate shortharded version of if/else
    cout << ((distance < 120) ? "It's so closed!" : "It's too far!");
    
    return 0;
}