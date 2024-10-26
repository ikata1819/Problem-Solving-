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
#define pii pair<int,int>
#define bg begin()
#define ed end()
#define pb push_back
#define forloop for(int i=0;i<n;i++)
#define nl '\n'
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
bool com(pii a, pii b)
{
    return a.first<b.first;
}
void solve()
{

    int n;
    cin>>n;
    vector<pair<int,int>> a;
    int x,y;
    forloop
    {
        cin>>x>>y;
        a.pb(make_pair(x,1));
        a.pb(make_pair(y,-1));


    }
    sort(a.bg,a.ed,com);
//    forloop
//    {
//        cout<<a[i].first<<" "<<a[i].second<<nl;
//
//    }
    int m=0,ct=0;

  for(int i=0;i<a.size();i++){
    ct+=a[i].second;
    if(ct>m)
        m=ct;
  }
    cout<<m<<nl;


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
