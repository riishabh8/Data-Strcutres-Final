#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int n, int target)
{

    int start = 0, end = n - 1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == target)
            return mid + 1;
        if (arr[mid] > target)
        {
            end = mid - 1;
        }
        if (arr[mid] < target)
        {
            start = mid + 1;
        }
    }
    return 0;
}

int main()
{

    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int n = 10;
    int key = 10;

    cout << binarySearch(arr, n, key) << endl;

    return 0;
}