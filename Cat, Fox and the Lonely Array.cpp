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

    int n;
    cin>>n;
   vi a(n);

    forloop
    {
        cin>>a[i];

    }
    int ans=n;
    int equal=1;
    for(int i=1;i<n;i++){
        if(a[i]!=a[i-1]){
            equal=0;
            break;
        }
    }
    if(equal==1){
        cout<<"1\n";
        return;
    }
    for(int k=2;k<n;k++){
            int or1=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<k;j++){
                or1|=a[j]
            }
        }
        int or2=0;
        for(int i=n-1;i>=(n-k);i--){
            or2|=a[i];
        }
        if(or1==or2){
            ans=k;
            break;
        }
    }
    cout<<ans<<nl;

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
