#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define S string
#define V vector
#define Us unordered_set
#define Um unordered_map

vector<int> findDivisors(int num) {
    vector<int> divisors;

    for (int i = 1; i <= num; ++i) {
        if (num % i == 0) {
            divisors.push_back(i);
        }
    }

    return divisors;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        ll a[n+5],sum;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        ll pre[n+5]={0};
        for(int i=1;i<=n;i++){
           pre[i]=pre[i-1]+a[i-1];
        }
        vector<int> divisors=findDivisors(n);
        ll maxx=0,minn=INT_MAX,mmax=0,mmin=INT_MAX;
         for(int i=0;i<divisors.size();i++){
            int k=divisors[i];
            int x=1;
            for(int j=k;j<=n;j+=k){
                ll ans=pre[j]-pre[j-x*k];
                if(ans>maxx)
                    maxx=ans;
                if(ans<minn)
                    minn=ans;
        }
        if(maxx>mmax)
            mmax=maxx;
        if(minn<mmin)
            mmin=minn;

    }
    cout<<mmax-mmin<<endl;
    }
    return 0;
}
