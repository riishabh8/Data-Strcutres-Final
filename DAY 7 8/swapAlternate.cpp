/**
 * @file swapAlternate.cpp
 * @author your name (you@domain.com)
 * @brief swap aternate numbers in cpp using 2ptr
 * note check the i+1 index
 * @version 0.1
 * @date 2022-05-14
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <bits/stdc++.h>
using namespace std;

void swapAlternate(int arr[], int n)
{
    for (int i = 0; i - 1 < n; i+=2)
    {
        /* code */
        swap(arr[i], arr[i + 1]);
    }
}

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int arr[] = {2, 7, 5, 6, 9, 8};
    swapAlternate(arr, 6);
    display(arr, 6);
    return 0;
}