#include <bits/stdc++.h>
using namespace std;

//#define int long long int
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
    vector<long long> a(n);
    int hash[101]={0};
    forloop
    {
        cin>>a[i];
        hash[a[i]%k]++;
    }
//    for(int i=0;i<=100;i++)
//            cout<<hash[i]<<" ";
//            cout<<nl;

int ans= min(hash[0],1);
for(int i=0;i<k/2;i++){
    ans+=max(hash[i],hash[k-i]);
}
if(k%2==0)
ans+=min(hash[k/2],1);


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
