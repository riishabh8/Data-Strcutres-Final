/**
 * @file reverseNum.cpp
 * @author your name (you@domain.com)
 * @brief 137 -> 731
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
    cout << rev;
    return 0;
}