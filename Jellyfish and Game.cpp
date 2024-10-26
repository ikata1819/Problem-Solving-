#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, m;
    long long k;
    cin >> t;
    while (t--)
    {
        cin >> n >> m >> k;
        long long a[n];
        long long b[m];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int j = 0; j < m; j++)
            cin >> b[j];
        long long min1 = LLONG_MAX;
        long long min2 = LLONG_MAX;
        long long max1 = LLONG_MIN;
        long long max2 = LLONG_MIN;
        long long sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] < min1)
                min1 = a[i];
            if (a[i] > max1)
                max1 = a[i];
            sum += a[i];
        }
        for (int i = 0; i < m; i++)
        {
            if (b[i] > max2)
                max2 = b[i];
            if (b[i] < min2)
                min2 = b[i];
        }
        if (k % 2LL == 0)
        {
            if (max1 > min2)
                cout << sum - max1 + min2 << endl;
            else
                cout << sum << endl;
        }
        else if (min1 > max2)
            cout << sum << endl;
        else
            cout << sum - min1 + max2 << endl;
    }
    return 0;
}
