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
    int n,m;
    cin>>n>>m;
    vi a(m);
    for(int i=0;i<m;i++){
        cin>>a[i];
    }
    int ans=0;
    ans+=a[0]-1;
    for(int i=1;i<m;i++){
        if(a[i]<a[i-1]){
            ans+=n-a[i-1]+a[i];
        }
        else
            ans+=a[i]-a[i-1];
    }
    cout<<ans<<nl;
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
