#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define S string
#define V vector
#define Us unordered_set
#define Um unordered_map

int main()
{
    int t,n,x;
    cin>>t;
    while (t--)
    {
        cin>>n>>x;
        int a[n+5];
        for(int i=0; i<n; i++)
            cin>>a[i];
        a[n]=x+(x-a[n-1]);

        int diff[n+5];
        for(int i=1; i<=n; i++)
            diff[i]=a[i]-a[i-1];
        diff[0]=a[0];
        sort(diff,diff+n+1);
        cout<<diff[n]<<endl;

    }
    return 0;
}

