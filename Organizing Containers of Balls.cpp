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
    int a[n+5][n+5];
    forloop
    {
        for(int j=0; j<n; j++)
        {
            cin>>a[i][j];
        }

    }
    vi row_sum,col_sum;
    int sum;
    forloop
    {
        sum=0;
        for(int j=0; j<n; j++)
        {
            sum+=a[i][j];
        }
        row_sum.pb(sum);
    }

    forloop
    {
        sum=0;
        for(int j=0; j<n; j++)
        {
            sum+=a[j][i];
        }
        col_sum.pb(sum);
    }
    sort(row_sum.bg,row_sum.ed);
    sort(col_sum.bg,col_sum.ed);
    forloop{
        if(row_sum[i]!=col_sum[i]){
            cout<<"Impossible"<<nl;
            return;
        }
//cout<<row_sum[i]<<" "<<col_sum[i]<<nl;
    }
    cout<<"Possible"<<nl;
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
