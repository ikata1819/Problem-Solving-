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


void solve()
{
    int n;
    cin>>n;
    int hash1[n+5]={0};
    int hash0[n+5]={0};
    vi a(n+1);
    for(int i=1;i<=n;i++)
    {
       cin>>a[i];
       if(a[i]==0 )
        hash0[i]++;
        if(a[i]==1 )
        hash1[i]++;
    }
    for(int i=1;i<n;i++){
        hash1[i]+=hash1[i-1];
        hash0[i]+=hash0[i-1];
    }
//for(int i=0;i<n;i++){
//       cout<<hash[i]<<" ";
//    }
    int q;
    cin >>q;
    while(q--){
        int l,r,N;
        cin>>l>>r;
        N=r-l+1;
        int x =hash1[r]-hash1[l-1];
        int y=hash0[r]-hash0[l-1];
        int ans= (N*(N-1))/2-(y*(y-1))/2-(x*y);
        cout<<ans<<nl;
    }

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
