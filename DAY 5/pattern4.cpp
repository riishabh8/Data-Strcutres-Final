/**
 * @file pattern4.cpp
 * @author your name (you@domain.com)
 * @brief : Hollow inverted half pyramid
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
        if (row == 1 || row == n)
        {
            for (int col = 1; col <= row; col++)
            {
                cout << "* ";
            }
        }
        else
        {
            for (int col = 1; col <= row; col++)
            {
                if (col == 1 || col == row)
                {
                    cout << "* ";
                }
                else
                {
                    cout << "  ";
                }
            }
        }
        cout << endl;
    }
    return 0;
}