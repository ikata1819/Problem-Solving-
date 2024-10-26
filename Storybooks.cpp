#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define S string
#define V vector
#define Us unordered_set
#define Um unordered_map

int main()
{
    int n,k;
    ll a[n+5],b[k+5];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
 for(int i=0; i<k; i++)
    {
        cin>>b[i];
    }
sort(a,a+k);
ll pre[n+5]={0};
 for(int i=1; i<n; i++)
    {
        pre[i]=pre[i-1]+a[i-1];
    }


    return 0;
}
