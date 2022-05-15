/**
 * @file noCreation.cpp
 * @author your name (you@domain.com)
 * @brief creating a number from 137 to 1 3 7       
 * @version 0.1
 * @date 2022-04-29
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int rev = 0, ans = 0;
    while (n)
    {
        rev = rev * 10 + (n % 10);
        n /= 10;
    }
    while (rev)
    {
        cout << (rev % 10) << endl;
        rev /= 10;
    }

    return 0;
}