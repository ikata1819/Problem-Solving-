#include <bits/stdc++.h>
using namespace std;

//#define int long long int
#define float double
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


void solve()
{
    int n;
    cin>>n;
    vi a(n);
    forloop
    {
        cin>>a[i];
    }
   sort(a.bg,a.ed);
   int i=0,j=n-1,k=1,l=n-2;
   int ans=abs(a[i]-a[j])+abs(a[k]-a[j])+abs(a[k]-a[l])+abs(a[i]-a[l]);
   cout<<ans<<nl;
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
