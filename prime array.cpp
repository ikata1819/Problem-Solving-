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
const int N=1e5+10;
V<bool> isPrime(N,1);
int nCr(int n,int r) {
    if (r > n - r) {
        r = n - r; // Choosing the smaller of r and n-r for optimization
    }
    int result = 1;
    for (int i = 0; i < r; ++i) {
        result *= (n - i);
        result /= (i + 1);
    }
    return result;
}
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
    int n;
    cin>>n;
    vi a(n);
    int ones=0,prm=0;

    forloop
    {
        cin>>a[i];
        if(a[i]==1)
            ones++;
    }


        forloop
        {
            if(isPrime[a[i]])
                prm++;
        }
       int ans=0;
       if(ones>1)
 ans= nCr(ones,2)*prm;
   cout<<ans<<nl;
}

signed main()
{
     primeSieve();
    int t=1;
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}
