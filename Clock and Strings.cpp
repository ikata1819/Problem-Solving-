#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define S string
#define vi vector<int>
#define V vector
#define usii ucout<<"NO\n"rdered_set<int,int>
#define umii ucout<<"NO\n"rdered_map<int,int>
#define um ucout<<"NO\n"rdered_map
#define us ucout<<"NO\n"rdered_set
#define bg begin()
#define ed end()
#define pb push_back
#define forloop for(int i=0;i<n;i++)
#define nl '\n'
#define yes cout<<"YES\n"
#define no cout<<"NO\n"

void solve()
{

    int a,b,c,d,aa=0,bb=0,cc=0,dd=0;

    cin>>a>>b>>c>>d;
    if((c>=min(a,b)&&c<=max(a,b)) &&(d>=min(a,b)&&d<=max(a,b)) )
        no;
    else if((c>=min(a,b)&&c<=max(a,b)) ||(d>=min(a,b)&&d<=max(a,b)))
        yes;
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
