#include <iostream>

using namespace std;

int main() {
    double x;
    double y;
    cin >> x >> y;

    if (x > y){
        // Chain the variables and text strings together
        cout << x << " is greater than " << y;
    } else if (x < y) {
        cout << x << " is less than " << y;
    } else {
        cout << x << " is equal to " << y;
    }

    return 0;
}