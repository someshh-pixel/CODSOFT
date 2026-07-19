#include<iostream>
using namespace std;

int main() {
    float num1, num2;
    char op, choice;

    do{
    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter The operators (+, -, *, /): ";
    cin >> op;

    cout << "Enter the second number: ";
    cin >> num2;

    switch(op) {
        case '+':
            cout << "Answer = " << num1 + num2;
            break;

        case '-':
            cout << "Answer = " << num1 - num2;
            break;

        case '*':
            cout << "Answer = " << num1 * num2;
            break;

        case '/':
            if(num2 != 0)
                cout << "Answer = " << num1 / num2;
            else
                cout << "Error!!!! division is not allowed by zero .";
            break;

        default:
            cout << "Invalid operator!";
    }
    cout << "\nDo you want to perform another calculation? (y/n): ";
        cin >> choice;

    } while(choice == 'y' || choice == 'Y');

    cout << "Thank you.";

    return 0;
}
