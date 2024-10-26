#include<stdio.h>
#include<cstring>
#include<algorithm>
#include<iostream>
#include<vector>
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

bool com(vi &a,vi &b){
    if(a[0]==b[0]){
        if(a[1]==b[1]){
            return a[2]<b[2];
        }
        return a[1]<b[1];
    }
    return a[0]<b[0];
}
void solve()
{

    int n;
    cin>>n;
    vector<vector<int>> a;
    forloop{
    vector<int>temp;
    int h,m,s;
    cin>>h>>m>>s;
    temp.pb(h);
    temp.pb(m);
    temp.pb(s);
    a.pb(temp);
    }
    sort(a.bg,a.ed,com);
    forloop{
        for(int j=0;j<3;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<nl;
    }



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

