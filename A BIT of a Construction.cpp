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
    int expo=log2(k);
    expo=pow(2,expo);
    expo--;
    if(n==1){
        cout<<k;
    }
   else{
    cout<<expo<<" ";
    cout<<k-expo<<" ";
    for(int i=0;i<n-2;i++)
        cout<<0<<" ";
   }
   cout<<nl;

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