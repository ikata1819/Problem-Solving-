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
    S s,temp;
    cin>>n>>s;
    //cout<<s<<nl;
    unordered_map<string,int> pairs;
    for(int i=0;i<n;i+=2){
            temp="";
        temp+=s[i];
        temp+=s[i+1];
        //cout<<temp<<nl;
        pairs[temp]++;
    }
    int ans= pairs["00"]*2+pairs["11"]*2;
    if(pairs["01"])
        ans+=2;
    if(pairs["10"]==1 )
        ans+=1;
    if(pairs["10"]>1)
        ans+=2;

    cout<<ans<<nl;
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
