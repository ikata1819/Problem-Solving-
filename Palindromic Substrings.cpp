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
    S s;
    cin>>s;
    if(n==1)
        cout<<"bob\n";
    else if(n==2)
    {
        if(s[0]==s[1])
            cout<<"alice\n";
        else
            cout<<"bob\n";
    }
    else{
        if(n%2==0)
            cout<<"alice\n";
        else
            cout<<"bob\n";
    }

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
