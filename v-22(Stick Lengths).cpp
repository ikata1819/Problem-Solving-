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
    vi a(n);
    forloop
    {
        cin>>a[i];
    }
    sort(a.bg,a.ed);
    int med;
    if(n%2==0){
            med=(a[n/2]+a[n/2-1])/2;
        }
        else{
             med=a[n/2];
        }
        int ans=0;
    forloop{
        ans+=abs(med-a[i]);
    }
    cout<<ans<<nl;


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

