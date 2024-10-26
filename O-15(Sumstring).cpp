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

    S s;
    cin>>s;
    vi a;
    for(auto c:s)
    {
        if(c!='+')
       a.pb(c-'0');
    }
    sort(a.bg,a.ed);
    int n=0;

    for(int i=0;i<s.length();i++)
    {
        if(s[i]!='+'){
       s[i]=a[n]+'0';
       n++;
        }

    }
    cout<<s<<nl;


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
