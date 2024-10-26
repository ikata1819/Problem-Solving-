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

    int n,f,k,count_f=0,ff;
    cin>>n>>f>>k;
    vi a(n);

    forloop
    {
        cin>>a[i];

    }
    ff=a[f-1];
    forloop
    {
        if(a[i]==ff)
        {
            count_f++;
        }

    }
    sort(a.rbegin(),a.rend());

    int ct=count_f;
    for(int i=0;i<k;i++)
    {
        if(a[i]==ff){
           count_f--;
        }

    }
    if(count_f==0)
        yes;
    else if (ct>count_f){
        cout<<"MAYBE\n";
    }
    else
        no;


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
