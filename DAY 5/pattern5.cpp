/**
 * @file pattern5.cpp
 * @author your name (you@domain.com)
 * @brief full Pyramid
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
    for (int row = 1; row <= n; row++)
    {
        for (int col = n - row; col >= 1; col--)
        {
            cout << " ";
        }

        for (int col = 1; col <= row; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}