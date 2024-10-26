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
    int ans=0;
    vi p(3);
    cin >> p[0] >> p[1]>> p[2];
    int sum = p[0] + p[1] + p[2];

    if (p[0] == 0 && p[1] == 0 && p[2] == 0)
    {
        cout << "0\n";
        return;
    }

    if (sum % 2 != 0)
    {
        cout << "-1\n";
        return ;
    }
    else
    {

        while(sum>1)
        {
            sort(p.bg,p.ed);
            if(p[0]>0)
            {
                ans++;
                p[0]--;
                p[2]--;
            }
            if(p[1]>0)
            {
                ans++;
                p[2]--;
                p[1]--;
            }
            if(p[0]==0 && p[1]==0)
                break;
            sum = p[0] + p[1] + p[2];
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
