#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "::Welcome::" << endl;
    bool keepon = true;
    do
    {
        int a, b;
        cout << "Enter the number1:" << endl;
        cin >> a;
        cout << "Enter the number2:" << endl;
        cin >> b;
        cout << "Enter operation" << endl;
        char op;
        cin >> op;
        switch (op)
        {
        case '+':
            cout << a + b << endl;
            break;
        case '-':
            cout << a - b << endl;
            break;
        case '*':
            cout << a * b << endl;
            break;
        case '/':
            cout << a / b << endl;
            break;
        case 'q':
            keepon = false;
            break;

        default:
            cout << "Invalid Input" << endl;
            break;
        }
        char goOn;
        cout << "Continue?" << endl
             << "y/n" << endl;
        cin >> goOn;
        goOn == 'n' || goOn == 'N' ? keepon = false : NULL;

    } while (keepon);

    cout << "Thanks for using the calculator" << endl;
    cout << "Designed and Developed by Rishabh Dubey" << endl;
    return 0;
}