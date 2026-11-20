#include <iostream>
using namespace std;

// function named greet()
void greet() {
    cout << "Hello Arduino!" << endl;
}

int main() {

    // 1. print numbers 1 to 10
    cout << "1. Numbers 1 TO 10" << endl;

    for (int i = 1; i <= 10; i++) {
        cout << i << endl;
    }

    cout << endl;

    // 2. if a number is even or odd
    cout << "2. Even or Odd" << endl;

    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (number % 2 == 0) {
        cout << "The number is Even." << endl;
    } else {
        cout << "The number is Odd." << endl;
    }

    cout << endl;

    // 3. the greet function
    cout << "3. Greeting Function" << endl;
    greet();

    cout << endl;

    // 4. the array of 5 integers
    cout << "4. Array of 5 Integers" << endl;

    int numbers[5] = {10, 20, 30, 40, 50};

    for (int i = 0; i < 5; i++) {
        cout << numbers[i] << endl;
    }

    cout << endl;

    // 5. toggle between the on & off
    cout << "5. On and Off Toggle" << endl;

    bool state = false;

    for (int i = 0; i < 6; i++) {
        if (state == true) {
            cout << "ON" << endl;
        } else {
            cout << "OFF" << endl;
        }

        state = !state;
    }

    return 0;
}