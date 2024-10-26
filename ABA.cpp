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
    S s;
    cin >> s;
    int n = s.size();
    vi count(26, 0);
    vi prefixSum(26, 0);
    int result = 0;

    for (int j = 0; j < n; j++)
    {
        int idx = s[j] - 'A';
        result += prefixSum[idx];

        for (int i = 0; i < 26; i++)
        {
            prefixSum[i] += count[i];
        }

        count[idx]++;
    }

    cout << result << nl;
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
