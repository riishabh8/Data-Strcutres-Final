/**
 * @file revArray2.cpp
 * @author your name (you@domain.com)
 * @brief  approach to solve the array problem by using the 2 pointer
 * @version 0.1
 * @date 2022-05-14
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <bits/stdc++.h>
using namespace std;

void reverse(int arr[], int n)
{
    int i,j;
    i=0;
    j=n-1;
    while(i<=j){
        cout<<arr[i]<<"  "<<arr[j]<<endl;
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
}

int main()
{
    int arr[] = {3, 5, 2, 7, 6, 9,10};
    reverse(arr,7);
    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}