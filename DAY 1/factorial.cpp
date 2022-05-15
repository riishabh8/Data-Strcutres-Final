/*
    Classwork : Print factorial of 2 numbers
    date: 14/April/2022
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num = 0, ans = 1;
    cout << "Input:" << endl;
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        ans *= i;
    }
    cout << "Answer:" << ans << endl;
    return 0;
}