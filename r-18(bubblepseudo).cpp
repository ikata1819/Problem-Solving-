#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define S string
#define vi vector<int>
#define V vector
#define usii unordered_set<int,int>
#define umii unordered_map<int,int>
#define um unordered_map
#define us unordered_set
#define bg begin()
#define ed end()
#define pb push_back
#define forloop for(int i=0;i<n;i++)
#define nl '\n'
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
int bubbleSort(vector<int>& arr) {
    int n = arr.size();
    int ct=0;
    for (int i = 0; i < n - 1; ++i) {
        for (int j = n-1; j >=i+1; j--) {
            if (arr[j] < arr[j - 1]){
                swap(arr[j], arr[j -1 ]);
                ct++;
                }
        }
    }
    return ct;
}
void solve()
{

    int n;
    cin>>n;
   vi a(n);
    forloop
    {
        cin>>a[i];
    }
    int ct=bubbleSort(a);
    forloop{
        cout<<a[i]<<" ";
    }
    cout<<nl<<ct;

}

signed main()
{
    int t=1;
     //cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}
