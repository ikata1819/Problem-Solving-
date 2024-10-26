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
 int const N=1e7+10;
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



int  M=1e9+7;
int  const p=1e5+5;
int fact[p];
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
for(int i=0;i<p;i++){
    fact[i]=(fact[i-1]*i)%M;
}
}


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
