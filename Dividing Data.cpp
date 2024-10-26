#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define S string
#define V vector
#define Us unordered_set
#define Um unordered_map

int main()
{
    ll n,x,c=0,sum=0;
    cin>>n>>x;
    ll a[n+5];
    for(ll i=0; i<n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);

    for(ll i=0; i<n; i++)
    {
        sum+=a[i];
        if(sum>x)
            break;
        c++;
    }
    cout<<c<<endl;
    return 0;
}

