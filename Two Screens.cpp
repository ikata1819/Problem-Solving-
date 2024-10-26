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

int lcs(string &str1, const string &str2) {
    int minLength = min(str1.size(), str2.size());
    int length = 0;


    for (int i = 0; i < minLength; ++i) {
        if (str1[i] == str2[i]) {
            ++length;
        } else {
            break;
        }
    }

    return length;
}
void solve()
{
    S s,t;
    cin>>s>>t;
    int ans=lcs(s,t);
    ans+=s.length()+t.length()-2*ans;
    if(lcs(s,t)>0)
    ans++;
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
