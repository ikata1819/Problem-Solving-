#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define S string
#define V vector
#define Us unordered_set
#define Um unordered_map


int main()
{
    ll n,l,diff,f;
    int run=50;
    double start=0,ed,mid;
    cin>>n>>l;
    ll a[n+5];

    ed=l;

    a[0]=0;
    for(int i=1;i<=n;i++){
    cin>>a[i];
    }
    sort(a,a+n+1);
    if(a[1]!=0)
        a[0]= a[0]-a[1];
    if(a[n]!=l)
        a[n+1]=2*l-a[n];
        else
            a[n+1]=a[n];
    double maxdiff=0;
    for(int i=0;i<=n;i++){
        diff=a[i+1]-a[i];
        if(diff>maxdiff)
            maxdiff=diff;
    }
    maxdiff=(maxdiff/2.00);
    while(run--){
        mid=(start+ed)/2.00;
        if(mid>maxdiff){
            ed=mid;
        }
        if(mid<maxdiff){
            start=mid;
        }


    }
    //cout<<a[n+1]<<endl;
    cout<<fixed<<setprecision(10)<<mid;
    return 0;
}
