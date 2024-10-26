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
vi  hp(N,0);
vi distictPrime,divisors[N];
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
void higest_prime(){
for(int i=2;i<N;i++){
    if(hp[i]==0){
        for(int j=i;j<N;j+=i){
            hp[j]=i;
        }
    }
}
}
void primeFactor(int num)
{
    primeSieve();
    while(num>1)
    {
        int factor=hp[num];
        while(num%factor==0)
        {
            num/=factor;
        }
        distictPrime.pb(factor);
    }
//    for(auto fact: primeFacts){
//        cout<<fact.first<<" "<<fact.second<<nl;
//    }
}

void divisor(int num)
{
    for(int i=2; i<N; i++)
    {
        for(int j=i; j<N ; j+=i)
        {
            divisors[j].pb(i);
        }
    }

    for(int div: divisors[num])
    {
        cout<<div<<" ";
    }
}
void solve()
{
    int n;
    cin>>n;
    vi a;
    forloop
    {
        cin>>a[i];
    }

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
