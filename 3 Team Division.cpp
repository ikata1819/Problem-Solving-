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
#define no cout<<"nO\n"

void solve()
{
    int n;
    cin >> n;
    vi A(n), B(n);
    forloop {
        cin >> A[i] >> B[i];
    }

    int total_strength = accumulate(B.bg, B.ed, 0);
    if (total_strength % 3 != 0) {
        cout << -1 << nl;
        return;
    }

    int target_strength = total_strength / 3;
    V<V<vi>> dp(n + 1, V<vi>(target_strength + 1, vi(target_strength + 1, n + 1)));
    dp[0][0][0] = 0;

    for (int i = 0; i < n; ++i) {
        int strength = B[i];
        for (int s1 = 0; s1 <= target_strength; ++s1) {
            for (int s2 = 0; s2 <= target_strength; ++s2) {
                int s3 = total_strength - s1 - s2;
                if (s3 < 0 || s3 > target_strength) continue;

                dp[i + 1][s1][s2] = min(dp[i + 1][s1][s2], dp[i][s1][s2]);
                if (s1 + strength <= target_strength) {
                    dp[i + 1][s1 + strength][s2] = min(dp[i + 1][s1 + strength][s2], dp[i][s1][s2] + 1);
                }
                if (s2 + strength <= target_strength) {
                    dp[i + 1][s1][s2 + strength] = min(dp[i + 1][s1][s2 + strength], dp[i][s1][s2] + 1);
                }
            }
        }
    }

    int result = dp[n][target_strength][target_strength];
    cout << (result == n + 1 ? -1 : result) << nl;
}

signed main()
{
    int t = 1;
    while (t--) {
        solve();
    }

    return 0;
}
