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
    string a;
    cin>>a;
    int c[10]= {0};
    for(int i=0; i<a.length(); i++)
    {
        c[a[i]-'A']++;
    }
    int res=0;
    for(int i=0; i<7; i++)
    {
        if(c[i]<m)
        {
            res+=m-c[i];
        }
    }
   cout<<res<<nl;


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