/*
    Homework: Print prime numbers
    Date:14/4/2022
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num = 0, n = 2;
    cout << "Please provide the input:" << endl;
    cin >> num;

    for (; n <= num; n++)
    {
        if (num % n == 0)
        {
            break;
        }
    }
    if (num == n)
    {
        cout << "Prime Number" << endl;
    }
    else
    {
        cout << "Not a Prime Number" << endl;
    }
    return 0;
}