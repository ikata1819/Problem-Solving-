#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define pb push_back
#define nl '\n'
#define yes cout << "Yes\n"
#define no cout << "No\n"

void solve()
{
    int n, k;
    cin >> n >> k;
    vi a(n+1);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    a[n]=0;
    int f=1;
    int current_sum = 0;
    for (int i = 0; i < n; i++)
    {
        current_sum += a[i];
        if (current_sum >= k)
        {
            // From this point, all cumulative sums should be >= K
            for (int j = i + 1; j < n; j++)
            {
                current_sum += a[j];
                if (current_sum < k)
                {
                    f=0;
                    break;
                }
            }
            break;
        }
    }


    // Sort the array in descending order
    if(f)
    {
        yes;
        for (int i = 0; i < n; i++)
        {
            if()
            cout << a[i] << " ";
        }
        cout << nl;
    }
    else
    {
        sort(a.rbegin(), a.rend());

         current_sum = 0;

        // Check cumulative sums
        for (int i = 0; i < n; i++)
        {
            current_sum += a[i];
            if (current_sum >= k)
            {
                // From this point, all cumulative sums should be >= K
                for (int j = i + 1; j < n; j++)
                {
                    current_sum += a[j];
                    if (current_sum < k)
                    {
                        no;
                        return;
                    }
                }
                break;
            }
        }

        yes;
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << nl;
    }
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    // cin >> t; // Uncomment if multiple test cases
    while (t--)
    {
        solve();
    }

    return 0;
}
