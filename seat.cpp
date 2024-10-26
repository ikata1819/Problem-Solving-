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
    int n,ct=0;
    S s;
    cin>>n>>s;
    for(int i=0; i<n-2; i++)
    {
        if (s[i]=='#' && s[i+2]=='#' && s[i+1]=='.')
            ct++;
    }

    cout<<ct<<nl;
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
