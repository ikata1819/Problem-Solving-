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

void insertionSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 1; i < n; ++i) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = key;
        cout<<j+1<<" ";
    }
    cout<<nl;
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
 insertionSort(a);

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
