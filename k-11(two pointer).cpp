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

void twoPointerSort(vector<int>& arr, int begin, int end) {
    if (begin >= end)
        return;

    int left = begin;
    int right = end;

    while (left < right) {
        while (left < right && arr[left] <= arr[right])
            left++;

        if (left < right) {
            swap(arr[left], arr[right]);
            right--;
        }

        while (left < right && arr[left] <= arr[right])
            right--;

        if (left < right) {
            swap(arr[left], arr[right]);
            left++;
        }
    }

    twoPointerSort(arr, begin, left - 1);
    twoPointerSort(arr, left + 1, end);
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
    twoPointerSort(a,0,n-1);
    forloop
    {
        cout<<a[i]<<" ";
    }
    cout<<nl;

}

signed main()
{
    int t=1;
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}
