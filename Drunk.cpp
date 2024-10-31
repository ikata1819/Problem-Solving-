#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define S string
#define V vector
#define pb push_back
#define nl '\n'
#define yes cout << "Yes\n"
#define no cout << "No\n"
int const N = 1e5+10;

#define white 0
#define gray 1
#define black 2

map<string, V<string>> g;
map<string, int> colors;

bool loopInGraph(const string &vertex) {
    colors[vertex] = gray;
    for (const auto &child : g[vertex]) {
        if (colors[child] == white) {
            if (loopInGraph(child)) return true;
        } else if (colors[child] == gray) {
            return true;
        }
    }
    colors[vertex] = black;
    return false;
}

void solve() {
    int n;
    cin >> n;
    g.clear();
    colors.clear();

    S s1, s2;
    for (int i = 0; i < n; i++) {
        cin >> s1 >> s2;
        g[s1].pb(s2);
        colors[s1] = white;
        colors[s2] = white;
    }

    for (const auto &node : colors) {
        if (node.second == white) {
            if (loopInGraph(node.first)) {
                no;
                return;
            }
        }
    }
    yes;
}

signed main() {
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        cout << "Case " << i << ": ";
        solve();
    }
    return 0;
}
