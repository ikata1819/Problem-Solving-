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
#define yes cout<<"YES\n";
#define no cout<<"NO\n";
const int N=1e7+10;
V<bool> isPrime(N,1);

void primeSieve()
{
    isPrime[0]=isPrime[1]=false;
    for(int i=2; i<N; i++)
    {
        if(isPrime[i]==true)
        {

            for(int j=2*i; j<N ; j+=i)
            {
                isPrime[j]=false;

            }
        }
    }
//for (int i=1;i<=100;i++)
//    cout<<lp[i]<<" "<<hp[i]<<nl;
}

void solve()
{
    primeSieve();
    int n;
    cin>>n;
    vi a(n);
    forloop
    {
        cin>>a[i];
    }

     forloop
    {
        int sq=sqrt(a[i]);
        if(sq*sq==a[i]){
            if(isPrime[sq]){
                yes

            }
           else
                no
        }
        else
        no
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
