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
void solve()
{
    int n,a,b,ans;
    cin>>n>>a>>b;
    if((2*a)<b)
    {
        ans=n*a;
    }
    else
    {
        if(n%2==0)
            ans=n*b/2;
        else
        {
            ans=((n-1)*b/2)+a;
        }
    }
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
