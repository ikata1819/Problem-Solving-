#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define S string
#define V vector
#define Us unordered_set
#define Um unordered_map

int main()
{
    int t,n,k,f;
    cin>>t;
    while(t--)
    {
        f=0;
        cin>>n>>k;
        ll a[n+5];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(int i=0; i<n-1; i++)
        {
            if(a[i]>a[i+1]){
                f=1;
                break;
            }
        }
        if (n>1 && k==1 && f==1)
            cout<<"NO\n";
        else
            cout<<"YES\n";

    }

    return 0;
}

