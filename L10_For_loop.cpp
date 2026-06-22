#include <iostream>

using namespace std;

int main() {
    int sum;
    cin >> sum;
    // for (statement 1; statement 2; statement 3){}
    // statement 1 is executed (one time) before the execution of the code block (initial condition)
    // statement 2 defines the condition for executing the code block (initial check if i <= 5)
    // if statement 2 is false, the loop will be skipped and jump to "cout" line
    // statement 3 is executed (every time) after the code block has been executed
    // After the code inside the brackets finishes running, the program executes i++ to increase i by 1.
    // i++ is the shorthand of saying i = i + 1, it tells the algo to increase the i by exactly 1 each round of loop

    for (int i = 1; i <= 5; i++) {
        sum = sum + i;
    }
    cout << "Sum is "<< sum;
    return 0;
}

// if you input sum = 1, the sum in each round of loop will be (sum + i)
// i = 1 + 1 =2, i = 2 + 2 = 4, i = 4 + 3 = 7, i = 7 + 4 = 11, i = 11 + 5 = 16 (break)
// because the increment (i) is reached in the fifth round, so, the loop breaks and return sum = 16  
