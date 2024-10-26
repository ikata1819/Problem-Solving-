#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define umii unordered_map<int, int>
#define nl '\n'
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define forloop(n) for(int i = 0; i < n; i++)

void solve()
{
    int n, m;
    cin >> n;
    vi a(n), b(n);
    forloop(n)
    {
        cin >> a[i];
    }
    forloop(n)
    {
        cin >> b[i];
    }
    cin >> m;
    vi d(m);
    for (int i = 0; i < m; i++)
    {
        cin >> d[i];
    }

    // Maps to keep track of needs
    umii need,key;

    // Count the differences in a and b
    forloop(n)
    {
        if (a[i] != b[i])
        {
            need[b[i]]++;
        }

    }
    forloop(n)
    {
        if (need[a[i]]==0)
        {
            key[a[i]]++;
        }

    }
    int f=1;
    for(auto x: need)
    {
        if(x.second>0 )
        {
            f=0;
        }
    }
    if(f)
    {
        yes;
        return;
    }
    else
    {


        int ct=1;

        // Iterate through array d in order
        for (int i = 0; i < m; i++)
        {
            int current = d[i];
            if (need[current] > 0)
            {
                need[current]--;
                if (need[current] == 0)
                {
                    need.erase(current);
                }

            }
            else
            {
                if(key[current]==0)
                {
                    ct=0;
                }
            }


        }
        cout<<"ct "<<ct<<nl;
        for(auto x: need)
        {
            cout<<x.first<<" "<<x.second<<nl;
        }
        for(auto x: need)
        {
            if(x.second>0 )
            {
                no;
                return;
            }
        }
        if(ct==0)
            no;
        else
            yes;
    }
}

signed main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
