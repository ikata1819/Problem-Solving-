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

    int n,k;
    cin>>n>>k;
    int hash[101]={0};
    vi a(n);
    forloop
    {
        cin>>a[i];
        hash[a[i]]++;
    }
    int ct=0;
   for(int i=0;i<101;i++){
        if(hash[i]>=k)
            ct++;
    }
    if(k>n)
        cout<<n<<nl;
    else if(ct==0)
        cout<<n<<nl;
    else
        cout<<k-1<<nl;



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
