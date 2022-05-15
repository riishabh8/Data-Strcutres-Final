#include <iostream>
#include "headerfile.h"
using namespace std;
int main()
{
    int a = 2, b = 4;
    cout << add(2, 4) << endl;
    cout << subtract(b, a) << endl;
    cout << opposite::add(a, b) << endl;
    cout << opposite::subtract(a, b) << endl;
    return 0;
}