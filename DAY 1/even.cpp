/*
  Classwork: Check if the number is even or odd
  Date :  12/4/2022
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "Enter the number:" << endl;
    int num = 0;
    cin >> num;
    if (num % 2 == 0)
    {
        cout << "Even Number" << endl;
    }
    else
    {
        cout << "Odd Number" << endl;
    }
    return 0;
}