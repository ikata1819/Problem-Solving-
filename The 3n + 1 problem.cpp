#include <bits/stdc++.h>
using namespace std;

#define int long long

int dp[100000];

int func(int n)
{
    if (n == 1) return 1;

    int cycle = 0;
    if (n % 2 == 0)
    {
        cycle += func(n / 2) + 1;
    }
    else
    {
        cycle += func(3 * n + 1) + 1;
    }

    return cycle;
}

void solve()
{
    memset(dp, -1, sizeof(dp));
    for (int k = 1; k < 100000; k++)
    {
        dp[k] = func(k);
    }

    int i, j;
    while (scanf("%lld%lld", &i, &j) == 2 && i > 0 && j > 0)
    {
        cout << i << " " << j << " " ;
        int ans = 0;

        for (int k = i; k <= j; k++)
        {
            ans = max(ans, dp[k]);
        }

        cout<< ans << '\n';
    }
}

signed main()
{
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
