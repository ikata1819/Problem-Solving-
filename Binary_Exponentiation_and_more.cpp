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
int const M=1e9+7;
int const N=1e5+5;
int fact[N];
int binary_exp(int a,int b, int m)
{
    int res=1;
    while(b>0)
    {
        if(b>0)
        {
            res=(res*a)%m;
        }
        a=(a*a)%m;
        b>>=1;
    }
    return res;
}
void fact_arr(){
fact[0]=1;
for(int i=0;i<N;i++){
    fact[i]=(fact[i-1]*i)%M;
}
}
void solve()
{
    int a,b;
    cin>>a>>b;
   cout<< binary_exp(a,b,M)<<nl;



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
