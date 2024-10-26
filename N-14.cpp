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
void selectionSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = n-1; i >0; --i) {
        int minIndex = i;
        for (int j = i; j >=0; --j) {
            if (arr[j] >= arr[minIndex])
                minIndex = j;
        }

            swap(arr[i], arr[minIndex]);
            cout<<minIndex<<" ";

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
   selectionSort(a);


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
