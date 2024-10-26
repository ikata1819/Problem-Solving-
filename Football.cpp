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
    int n;
    cin>>n;
    S s[n+1],t1,t2=" ";
    forloop{
        cin>>s[i];
    }
    t1=s[0];
    forloop{
        if(s[i]!=s[0]){
            t2=s[i];
            break;
        }
    }
    int ct1=0,ct2=0;
    forloop{
        if(s[i]==t1)
            ct1++;
        if(s[i]==t2)
            ct2++;
    }
     (ct1>ct2) ? cout<<t1 : cout<<t2;
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
