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

    string str;
    cin>>str;
    int len=str.length();
    int ct1=0,ct0=0;
    for(int i=1; i<len; i++)
    {
        if(str[i-1]=='1'&& str[i]=='0')
            ct1++;
        if(str[i-1]=='0'&& str[i]=='1')
            ct0++;

    }
    ct1++;
    ct0--;
    if(ct0<0)
        ct0=0;

int ans=ct1+ct0;
if(ans==0)
    ans=1;
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
