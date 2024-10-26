#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define S string
#define vi vector<int>
#define V vector
#define usii unordered_set<int>
#define umii unordered_map<int,int>
#define um unordered_map
#define us unordered_set
#define bg begin()
#define ed end()
#define pb push_back

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    unordered_map<char, char> mp;
    for (int i = 0; i < n; i++) {
        mp[s[i]] = s[i];
    }
    int q;
    cin >> q;
    while (q--) {
        char c, d;
        cin >> c >> d;
        for (auto it = mp.begin(); it != mp.end(); ++it) {
            if (it->second == c) {
                it->second = d;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        cout << mp[s[i]];
    }
}

signed main() {
    int t = 1;
    //cin>>t;
    while (t--) {
        solve();
    }

    return 0;
}
