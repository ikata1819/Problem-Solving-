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

int dp[100005];
 vi a(100005);
int lis(int i){
    if(dp[i]!=-1) return dp[i];
    int ans=1;
    for(int j=0; j<i; ++j){
        if(a[i]>a[j]){
            ans=max(ans, lis(j)+1);
        }
    }
    return dp[i]=ans;
}
void solve()
{
    memset(dp,-1,sizeof(dp));
    int n;
    cin>>n;

    forloop{
        cin>>a[i];
    }
    int ans=0;
    forloop{
        ans=max(ans,lis(a[i]));
    }
    cout<<ans<<nl;
}

signed main()
{
    int t=1;
   // cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}
