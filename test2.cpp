#include <iostream>
using namespace std;
int main()
{
    char operator1;
    float num1, num2;
    cout << "Enter operator *, -, +, / " << endl;
    cin >> operator1;                               // taking operator input from user
    cout << "Enter 1st number" << endl;
    cin >> num1;                                    // taking 1st number input from user
    cout << "Enter 2nd number" << endl;
    cin >> num2;                                    // taking 2nd number input from user

    switch (operator1)
    {
    case '+':
        cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;

        break;
    case '-':
        cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;

        break;

    case '*':
        cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;

        break;

    case '/':
        cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;

        break;

    default:
        break;
    }

    return 0;
}