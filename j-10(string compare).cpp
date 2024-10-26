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

    S s1,s2;
    cin>>s1>>s2;
    for (char &c : s1) {
        c = tolower(c);
    }
    for (char &c : s2) {
        c = tolower(c);
    }
    if(s1<s2)
    cout<<"-1"<<nl;
    else if(s1==s2)
   cout<<"0"<<nl;
   else
   cout<<"1"<<nl;


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
