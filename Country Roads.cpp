#include <bits/stdc++.h>
using namespace std;


const int N=1e5+10;
const int inf=1e9+10;

vector<int> vis(N);
vector<int> dist(N,inf);

void dijkstra(int source,vector<pair<int,int>> g[]){
    set <pair<int,int>> st;
    st.insert({0,source});
    dist[source]=0;
    while(st.size()>0){
        auto node = *st.begin();
        int v=node.second;
        int dis=node.first;
        st.erase(st.begin());
        if(vis[v]){
            continue;
        }
        vis[v]=1;
        for(auto child:g[v]){
            int child_v=child.first;
            int wt=child.second;
            if(max(dist[v],wt)<dist[child_v]){
            dist[child_v]=max(dist[v],wt);
            st.insert({dist[child_v],child_v});
            }
        }
     }
}

void solve()
{
    vector<pair<int,int>> g[N];
    fill(dist.begin(),dist.end(),inf);
    fill(vis.begin(),vis.end(),0);
    int n,m;
    cin>>n>>m;
    for(int i=0; i<m; i++)
    {
        int x,y,wt;
        cin>>x>>y>>wt;
        g[x].push_back({y,wt});
        g[y].push_back({x,wt});


    }
    int t;
    cin>>t;
    dijkstra(t,g);
        for(int j=0; j<n; j++)
        {
            if(dist[j]==inf)
                cout<<"Impossible\n";
            else
                cout <<dist[j]<<endl;

        }
}
signed main()
{
    int t=1;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
//        memset( dist, inf ,sizeof(dist));
        cout<<"Case "<<i<<":\n";
        solve();
    }

    return 0;
}


