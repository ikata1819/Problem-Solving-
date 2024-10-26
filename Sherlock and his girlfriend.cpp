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
const int N=1e7+10;
V<bool> isPrime(N,1);
//vi  hp(N,0);
//umii primeFacts;
//vi divisors[N];
void primeSieve()
{
    isPrime[0]=isPrime[1]=false;
    for(int i=2; i<N; i++)
    {
        if(isPrime[i]==true)
        {
            //lp[i]=hp[i]=i;
            for(int j=2*i; j<N ; j+=i)
            {
                isPrime[j]=false;
               // hp[j]=i;
//                if(lp[j]==0)
//                {
//                    lp[j]=i;
//                }
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
    vi ans(n+5,1);
    int f=1;
   for(int i=2;i<=n+1;i++){
    if(!isPrime[i]){
            f=2;
        ans[i]=2;
    }
   }
   cout<<f<<nl;
   for(int i=2;i<=n+1;i++){
    cout<<ans[i]<<" ";
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
