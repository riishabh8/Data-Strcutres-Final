/**
 * @file decimalToBinary.cpp
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2022-04-29
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;
    int ans = 0;
    for (int i = 0; n; i++)
    {
        bool bit = n & 1;
        ans = ans + (bit * pow(10, i));
        n = n >> 1;
    }
    cout << ans;
    return 0;
}