#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define S string
#define V vector
#define Us unordered_set
#define Um unordered_map

int main()
{
    int n;
    cin>>n;
    int a[n+5];
    ll sum=0;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    cout<<sum<<endl;
    return 0;
}
