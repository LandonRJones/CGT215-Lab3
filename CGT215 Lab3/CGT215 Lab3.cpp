#include <iostream>
using namespace std;

void printMenu(int& choice) {
    cout << "Welcome to my program, please select an operation to perform:" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "\nYour Selection: ";
    cin >> choice;
}

void getChoices(float& A, float& B) {
    cout << "Please enter the first value: ";
    cin >> A;

    cout << "Please enter the second value: ";
    cin >> B;
}

void addition(float A, float B) {
    cout << "Result of addition: " << A + B << endl;
}

void subtraction(float A, float B) {
    cout << "Result of subtraction: " << A - B << endl;
}

void multiplication(float A, float B) {
    cout << "Result of multiplication: " << A * B << endl;
}

void division(float A, float B) {
    if (B != 0) {
        cout << "Result of division: " << A / B << endl;
    }
    else {
        cout << "Cannot divide by zero." << endl;
    }
}

int main() {
    int choice;
    float A, B;

    printMenu(choice);
    getChoices(A, B);

    switch (choice) {
    case 1:
        addition(A, B);
        break;
    case 2:
        subtraction(A, B);
        break;
    case 3:
        multiplication(A, B);
        break;
    case 4:
        division(A, B);
        break;
    default:
        cout << "Invalid choice." << endl;
    }

    return 0;
}
