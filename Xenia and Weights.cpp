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
    int one=0;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i]=='1')
        {
            a.pb(i+1);
            one++;
        }
    }
    int n;
    cin>>n;
     int l=a.size();
    if(n==1 && one>0)
    {
        yes;
        cout<<a[0];
    }

    else if(one>1)
    {
        yes;
        for(int i=0; i<n; i++)
        {
            if(i%2==0)
                cout<<a[l-2] <<" ";
            else
                cout<<a[l-1]<<" ";

        }
    }
    else
        no;

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
