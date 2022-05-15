#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {12, 2, 32, 42, 51};
    int n = 5;
    // code here
    vector<int> ans;
    int ans1;
    for (int i = 0; i <= n; i++)
    {
        if (arr[i] == i+1)
        {
            ans.push_back(i+1);
            break;
        }
    }
    for (int i = 0; i < ans.size(); i++)
    {
        // Printing the element at
        // index 'i' of ans
        cout << ans[i];
    }
    return 0;
}