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
    int n,ans;
    cin>>n;
    vi a(n);
    forloop
    {
        cin>>a[i];
    }
    int hash[n+1]= {0};
    for(int i=0; i<n; i++)
    {
        hash[a[i]]++;
    }
//    for(int i=0; i<n; i++)
//    {
//        cout<<hash[i]<<" ";
//    }
    int ct=0;
    for(int i=0; i<n; i++)
    {
         if(hash[i]==1){
            ct++;
        }
        if(hash[i]==0)
        {
            ans=i;
            break;
        }
        else if (ct==2)
        {
            ans=i;
            break;
        }



    }
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
