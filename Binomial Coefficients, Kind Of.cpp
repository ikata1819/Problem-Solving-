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
const int MOD = 1000000007;

long long mod_exp(int base, long long exp, int mod)
{
    long long result = 1;
    base = base % mod;

    while (exp > 0)
    {

        if (exp % 2 == 1)
        {
            result = (result * base) % mod;
        }

        exp = exp >> 1;
        base = (base * base) % mod;
    }
    return result;
}
void solve()
{

    int n;
    cin>>n;
    vi N(n),k(n);
    forloop
    {
        cin>>N[i];
    }
    forloop
    {
        cin>>k[i];
    }
    forloop
    {
        cout<<mod_exp(2,k[i],MOD)<<nl;
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
