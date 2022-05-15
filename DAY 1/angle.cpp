/*
    ClassWork : Check if the angle is acute, obtuse or right;
    Date : 12/04/2022
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int angle = 0;
    cin >> angle;
    if (angle > 90)
    {
        cout << "Obtuse Angle" << endl;
        return 0;
    }
    if (angle == 90)
    {
        cout << "Right Angle" << endl;
        return 0;
    }
    else
    {
        cout << "Acute Angle" << endl;
    }
    return 0;
}