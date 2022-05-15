/*
    Classwork : Print the number greater than the both.
    Date : 12/4/2022

*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "Enter the 2 numbers:" << endl;
    int num1, num2;
    cin >> num1 >> num2;
    cout << "Greater between " << num1 << " and " << num2 << " is = ";
    if (num1 > num2)
    {
        cout << num1 << endl;
    }
    else
    {
        cout << num2 << endl;
    }
    return 0;
}