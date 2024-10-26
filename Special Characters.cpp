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
void solve()
{
    int n;
    cin>>n;
    if(n%2!=0)
    {
        cout<<"NO\n";
    }
    else
    {
        cout<<"YES\n";
        char a='A',b='B',c='C';
        for(int i=0; i<n/2; i++)
            {
                if(i%2==0)
                    cout<<a<<a;
                else
                    cout<<b<<b;
            }

cout<<nl;
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
