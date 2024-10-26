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
struct PairComparator {
    bool operator() (const pair<int, int>& a, const pair<int, int>& b) const {
        return a.first < b.first || (a.first == b.first && a.second < b.second);
    }
};

void solve()
{

    int n,k;
    cin>>n>>k;
    int rq,cq;
    cin>>rq>>cq;
   vector<pair<int, int>> o;
    set<pair<int, int>, PairComparator> obs;


    for (int i = 0; i < k; i++) {
        int r, c;
        cin >> r >> c;
        o.pb(make_pair(r,c));
    }
     for (const auto& p : o) {
        if (obs.find(p) == obs.end()) {
            obs.insert(p);
        }
    }
    int attack=(n-1)*2;
    attack+=min(cq-1,n-rq)+min(n-cq,n-rq)+min(rq-1,n-cq)+min(rq-1,cq-1);
    cout<<"attack "<<attack<<nl;
   for(auto ob: obs){
    int g1,g2,f,s;
    f=ob.first;
    s=ob.second;
    g1=abs(f-rq);
    g2=abs(s-cq);
    if(g1==g2){
        if(f<rq && s<cq)
            attack-=min(f-1,s-1)+1;
        else if(f>rq && s<cq)
            attack-=min(s-1,n-f)+1;
        else if(f<rq && s>cq )
            attack-=min(f-1,n-s)+1;
            else
            attack-=min(n-f,n-s)+1;
    }
    else if(g1==0){
        if(s>rq)
            attack-=abs(n-s)+1;
        else
             attack-=s;
    }
    else if(g2==0){
        if(f>cq)
            attack-=abs(n-f)+1;
        else
             attack-=f;
    }
   }

   cout<<attack<<nl;


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
