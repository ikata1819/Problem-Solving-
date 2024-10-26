#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define S string
#define vi vector<int>
#define V vector
#define usii unordered_set<int,int>
#define  P pair<int,int>
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
bool com(pair<int,int> a,pair<int,int> b)
{
    return a.second<b.second;
}
void solve()
{

    int n,p;
    cin>>n>>p;
    vi a(n),b(n);

    forloop
    {
        cin>>a[i];

    }
    forloop
    {
        cin>>b[i];

    }
    vector<pair<int,int>> m;
    forloop
    {
        m.pb({a[i],b[i]});
    }
    m.pb({n-1,p});
    sort(m.bg,m.ed,com);

//    for(auto & p :m){
//    cout<<p.second<<" ";
//    }
    int left=n-1;
    int ans=p;
    for(auto &x :m)
    {
        if(left==0)
        {
            break;
        }
        if(x.first<=left)
        {
            ans+=x.first*x.second;
            left-=x.first;

        }
        else
        {
            ans+=left*x.second;
            left=0;
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
