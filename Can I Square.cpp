#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define S string
#define V vector
#define Us unordered_set
#define Um unordered_map



int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        ll a[n+5];
        ll sum=0;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            sum+=a[i];
        }
        ll sq=sqrt(sum);
//        cout<<sq*sq<<endl;
//        cout<<sum<<endl;
        if (sq * sq == sum)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
