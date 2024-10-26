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
    int n,c,d;
    cin>>n>>c>>d;
    vi a(n*n);
    for(int i=0;i<n*n;i++){
        cin>>a[i];
    }
    sort(a.bg,a.ed);
    int m=*min_element(a.bg,a.ed);
    int ar[n+5][n+5];
    ar[1][1]=m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            ar[i+1][j]=ar[i][j]+c;
            ar[i][j+1]=ar[i][j]+d;
        }
    }
    vi ans;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            ans.pb(ar[i][j]);
        }
    }
    sort(ans.bg,ans.ed);
     for(int i=0;i<n*n;i++){
        if(ans[i]!=a[i]){
            no;
            return;
        }
    }
    yes;
    return;

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
