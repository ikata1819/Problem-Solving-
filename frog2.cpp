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
int path[100005];

int frog(int i, vi &h, int k)
{
    if(i==0) return 0;
    int cost=INT_MAX;
    if(path[i]!=-1)
    {
        return path[i];
    }
    for(int j=1;j<=k;j++){
            if(j>i) break;
    cost=min(cost,frog(i-j,h,k)+abs(h[i]-h[i-j]));
    }
    return path[i]=cost;
}
void solve()
{
    int n,k;
    cin>>n>>k;
    vi h(n);
    memset(path,-1,sizeof(path));
    forloop
    {
        cin>>h[i];
    }

    cout<<frog(n-1,h,k);

//    path[0]=0;
//    int cost;
//    for(int i=1; i<n; i++)
//    {  cost=0;
//        cost=path[i-1]+abs(h[i]-h[i-1]);
//        if(i>1)
//            cost=min(cost,path[i-2]+abs(h[i]-h[i-2]));
//            path[i]=cost;
//    }
//    cout<<cost<<nl;

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
