/*
    Classwork: Print the number upto num
    Date : 12/4/2022
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num = 0;
    cout << "Enter the number" << endl;
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        cout << i + 1 << " ";
    }
    cout << endl;
    return 0;
}