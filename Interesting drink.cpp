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
    int n,q,m;
    cin>>n;
    vi x(n);
    int hash[100005]={0};
    forloop
    {
        cin>>x[i];
        hash[x[i]]++;
    }
    for(int i=1;i<=100005;i++){
        hash[i]=hash[i]+hash[i-1];
    }
//    for(int i=1;i<=12;i++){
//        cout<<hash[i]<<" ";
//    }
    cin>>q;
    while(q--)
    {
        cin>>m;
        if(m>100000)
            cout<<n<<nl;
        else{
            cout<<hash[m]<<nl;
        }


    }


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
