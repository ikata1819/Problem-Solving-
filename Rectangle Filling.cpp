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
    string s[n];
    forloop
    {
        cin>>s[i];
    }
    char c='B';
    int row=0,col=0,r=INT_MAX,cl=INT_MAX;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(s[i][j]==c){
                row=max(row,i);
                col=max(col,j);
                r=min(r,i);
                cl=min(cl,j);
            }
        }
    }
    if(row==n-1 && col==m-1 && r==0 && cl==0){
        yes;
        return;
    }
    c='W';
     row=0,col=0,r=INT_MAX,cl=INT_MAX;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(s[i][j]==c){
                row=max(row,i);
                col=max(col,j);
                r=min(r,i);
                cl=min(cl,j);
            }
        }
    }
    if(row==n-1 && col==m-1 && r==0 && cl==0){
        yes;

    }
    else
        no;

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
