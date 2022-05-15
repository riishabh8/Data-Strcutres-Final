// { Driver Code Starts

//pair use krna seekha
#include <bits/stdc++.h>
using namespace std;
#define ll long long

pair<long long, long long> getMinMax(long long a[], int n) ;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++) cin >> a[i];

        pair<ll, ll> pp = getMinMax(a, n);

        cout << pp.first << " " << pp.second << endl;
    }
    return 0;
}// } Driver Code Ends


pair<long long, long long> getMinMax(long long a[], int n) {
    pair<ll,ll> ansPair;
    
    ansPair.first=INT_MAX;
    ansPair.second =INT_MIN;
    for(int index=0;index<n;index++){
        if(a[index]>ansPair.second){
            ansPair.second=a[index];
        }
        if(a[index]<ansPair.first){
            ansPair.first=a[index];
        }
        
    }
    return ansPair;
    
}