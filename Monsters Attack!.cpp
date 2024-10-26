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

void solve()
{
    int n,k;
    cin>>n>>k;
    vi a,x;
    for(int i=0; i<n; i++)
    {
        int temp;
        cin>>temp;
        a.pb(temp);
    }
    for(int i=0; i<n; i++)
    {
        int temp;
        cin>>temp;
        x.pb(temp);
    }
    map <int,int> M;
    for(int i=0; i<n; i++)
    {
        M[abs(x[i])]+=a[i];
        if(M[i]==0 && i!=0){
        M[i]=0;
        }
    }
//    for(auto it=M.bg;it!=M.ed;it++)
//    {
//        cout<<it->first <<" "<<it->second<<endl;
//    }
    auto it=M.bg;
    advance(it,1);
    int tot=0;
   while( it!=M.ed)
    {
        tot+=k;
        if(it->second>tot)
        {
            cout<<"NO\n";
            return;
        }
        tot=(tot-it->second);
        it++;
    }

    cout<<"yes\n";

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
/* for(int i=0;i<n;i++){

}
*/
