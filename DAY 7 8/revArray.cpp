#include <iostream>
using namespace std;
//array pass krna seekha
//array return krna ho toh static ki tarah save kr lo aasan hai


int *revArray(int arr[], int n)
{
    static int brr[100];
    for (int index = 0, idx = n-1; index < n; index++, idx--)
    {
        brr[index] = arr[idx];
    }

    return brr;
}

int main()
{
    // code

    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int index = 0; index < n; index++)
        {
            cin >> arr[index];
        }
        int *brr = revArray(arr, n);
        for (int index = 0; index < n; index++)
        {
            cout << brr[index] << " ";
        }
    }
    return 0;
}