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

    int n,k;
    cin>>n>>k;
   vi a(n);

    forloop
    {
        cin>>a[i];

    }
   int diff=0,mdiff=0,ind=1;
    for(int i=1;i<n;i++){
        diff=0;
        diff+=abs(a[i]-a[i-1]);
        if(diff>mdiff){
            mdiff=diff;
            ind=i;
        }
    }
     diff=0;
    for(int i=1;i<n;i++){

        diff+=abs(a[i]-a[i-1]);

    }



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

