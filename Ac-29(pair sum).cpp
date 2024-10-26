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

void sum(vector<pair<int,int>> a, int target, int &i, int &j)
{
    int left = 0;
    int right = a.size() - 1;

    while (left < right)
    {
        int currentSum = a[left].first + a[right].first;
        if (currentSum == target && a[left].second != a[right].second) // Check if indices are distinct
        {
            i = a[left].second;
            j = a[right].second;
            return;
        }
        else if (currentSum < target)
        {
            left++;
        }
        else
        {
            right--;
        }
    }
    i = -1;
    j = -1;
}

void solve()
{
    int n, target;
    cin >> n >> target;
    vector<pair<int,int>> a(n);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a[i] = make_pair(x, i + 1); // Fixing the index to 1-based
    }
    sort(a.begin(), a.end());
    int k, j;
    sum(a, target, k, j);
    //cout << k << " " << j << nl;
    if (k == -1 || j == -1)
    {
        cout << "IMPOSSIBLE";
    }
    else
        cout << min(k, j) << " " << max(k, j) << nl;
}

signed main()
{
    int t=1;
    // cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}
