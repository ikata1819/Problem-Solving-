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
    vi h(n+1);
    int prefix[n+5]={0};
   for(int i=0;i<n;i++){
        cin>>h[i];
    }
    for(int i=1;i<=n;i++){
       prefix[i]+=h[i-1]+prefix[i-1];
       //cout<<prefix[i]<<" ";
    }
    int sums[n+5]={0};

    for(int i=k,j=0;i<=n;i++,j++){
        sums[i]=prefix[i]-prefix[j];

    }
    int m=sums[k],ind=k;
    for(int i=k;i<=n;i++){
        if(sums[i]<m){
            m=sums[i];
            ind=i;
        }
    }
    cout<<ind-k+1<<nl;
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
