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
    int hash[10005]= {0};
    vi a(n);
    forloop
    {
        cin>>a[i];
        hash[a[i]]++;
    }
    int m=0;
    for(int i=1; i<10005; i++)
    {
        int sum=hash[i-1]+hash[i];
        if(sum>m)
            m=sum;
    }
    cout<<m<<nl;

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