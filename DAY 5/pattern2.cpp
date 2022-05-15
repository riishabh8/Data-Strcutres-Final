/**
 * @file pattern2.cpp
 * @author your name (you@domain.com)
 * @brief inverted pyramid
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
    for (int row = n; row >= 1; row--)
    {
        for (int col = 1; col <= row; col++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}