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

    int n=3;
float sum=0;
   vi a(n);

    forloop
    {
        cin>>a[i];
        sum+=a[i];
    }
   sort(a.bg,a.ed);
   int m=ceil(sum/3);
   int i=5,j=0;
   while(i>0){
        for(int j=0;j<3;j++){
    if(a[j]<m){
        if(i>(m-a[j])){
            a[j]=m;
            i-=m-a[j];
        }
        else{
            a[j]+=i;
            i=0;
        }
        if(a[j]>m)
            m=a[j];

    }
   }
   }
cout<<a[0]*a[1]*a[2]<<nl;
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
