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
    int n=3;
    int a[3][3];
    forloop
    {
        for(int j=0; j<n; j++)
        {
            cin>>a[i][j];
        }

    }
    vector<vector<int>> v;

    for(int i=1; i<=9; i++)
    {
        for(int j=i+1; j<=9; j++)
        {
            for(int k=j+1; k<=9; k++)
            {
                if(i+j+k==15)
                {
                    vi temp= {i,j,k};
                    v.pb(temp);
                }
            }
        }
    }
//    for(auto x: v){
//        for(auto c: x){
//            cout<<c<<" ";
//        }
//        cout<<nl;
//    }
    int dif=0,min=100000,ans=0;
    forloop
    {
        vi temp;
        for(int j=0; j<n; j++)
        {
            temp.pb(a[i][j]);
        }
        int k=0;
        sort(temp.bg,temp.ed);
        for(auto x: v)
        {
            for(auto c: x)
            {
                dif+=abs(temp[k]-c);
                k++;
            }
            if(dif<min){
                min=dif;
            }
        }
        ans+=min;

    }
    cout<<ans<<nl;
}

signed main()
{
    int t=1;
    //cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}
