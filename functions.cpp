#include <iostream>
using namespace std;

// Function declarations
int add(int no1, int no2);
int sub(int no1, int no2);
int mul(int no1, int no2);
int divd(int no1, int no2);

int main() {
    int no1, no2;
    char op;

    // User input
    cout << "Enter the 1st number: ";
    cin >> no1;
    cout << "Enter the 2nd number: ";
    cin >> no2;
    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;

    // Perform operation based on the operator
    if (op == '+') {
        add(no1, no2);
    } else if (op == '-') {
        sub(no1, no2);
    } else if (op == '*') {
        mul(no1, no2);
    } else if (op == '/') {
        if (no2 != 0) {  // Check for division by zero
            divd(no1, no2);
        } else {
            cout << "Error: Division by zero is not allowed." << endl;
        }
    } else {
        cout << "You entered the wrong operator." << endl;
    }

    return 0;
}

// Function definitions
int add(int no1, int no2) {
    int x = no1 + no2;
    cout << "The result of addition is: " << x << endl;
    return x;
}

int sub(int no1, int no2) {
    int x = no1 - no2;
    cout << "The result of subtraction is: " << x << endl;
    return x;
}

int mul(int no1, int no2) {
    int x = no1 * no2;
    cout << "The result of multiplication is: " << x << endl;
    return x;
}

int divd(int no1, int no2) {
    int x = no1 / no2;
    cout << "The result of division is: " << x << endl;
    return x;
}
