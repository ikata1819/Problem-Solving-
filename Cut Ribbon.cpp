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
int dp[5000];
int func(int len,vi &a){
    if(len==0) return 0;
    if(dp[len]!=-1) return dp[len];
    int ans=INT_MIN;
    for( int c : a){
        if(len-c>=0)
            ans=max(ans,func(len-c,a)+1);
    }
    return dp[len]=ans;
}

void solve()
{
    memset(dp,-1,sizeof(dp));

    int n;
    vi a(3);
    cin>>n>>a[0]>>a[1]>>a[2];
    cout<<func(n,a);
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
