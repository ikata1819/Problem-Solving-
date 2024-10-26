#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define S string
#define vi vector<int>
#define V vector
#define usii unordered_set<int>
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
    usii s;
    forloop
    {
        int x;
        cin>>x;
        s.insert(x);
    }

    vi ranked;
    for(auto it : s){
        ranked.pb(it);
    }
    sort(ranked.bg,ranked.ed);
//    for(auto it: ranked)
//        cout<<it<<" ";
//    cout<<nl;
    int m;
    cin>>m;
    vi player(m);
    for(int i=0; i<m; i++)
    {
        cin>>player[i];
    }
    for(int i=0; i<m; i++)
    {
        n=ranked.size();
    //cout<<n<<nl;
        auto it=lower_bound(ranked.bg,ranked.ed,player[i]);
        int pos=(it -ranked.bg);
        //cout<<*it<<" "<<pos<<nl;
        if(it==ranked.ed)
       cout<<1<<nl;

        else
            {
                int ans=n-pos;
                if((*it)==player[i]){
                    cout<<ans<<nl;
                }
                else
                    cout<<ans+1<<nl;
            }
    }


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
