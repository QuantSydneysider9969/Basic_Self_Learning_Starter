#include <iostream>

using namespace std;

int main() {
    // '>>' is the opposite of '<<', 'stream extraction operator' think about the data flow, 
    // you are asking value from user
    cout << "Enter 2 floating values: ";
    double x;
    double y;
    cin >> x >> y;
    cout << x + y;
    return 0;
}