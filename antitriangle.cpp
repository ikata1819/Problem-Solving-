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
int N=1e9;
void solve()
{
    int n,l;
    cin>>n>>l;
    vi a;
    if(l<=(N/2))
    {
         int x=l;
          forloop{
           a.pb(x);
           x+=l;
       }
    }
    else
    {
         int x=2;
       forloop{

           a.pb(x);
           x+=2;
       }
    }
    forloop{
        cout<<a[i]<<" ";
    }
    cout<<nl;


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
