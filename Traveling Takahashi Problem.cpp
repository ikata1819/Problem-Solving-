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
    int n, x = 0, y = 0, a, b;
    double ans = 0;
    cin >> n;
    forloop {
        cin >> a >> b;
        ans += sqrt((a - x) * (a - x) + (b - y) * (b - y));
        x = a;
        y = b;
    }
    ans += sqrt((0 - x) * (0 - x) + (0 - y) * (0 - y));
    cout << fixed << setprecision(20) << ans << nl;
}

signed main()
{
    int t = 1;
    //cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}