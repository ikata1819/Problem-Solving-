#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define S string
#define vi vector<int>
#define V vector
#define usii unordered_set<int, int>
#define umii unordered_map<int, int>
#define um unordered_map
#define us unordered_set
#define bg begin()
#define ed end()
#define pb push_back
#define forloop for (int i = 0; i < n; i++)
#define nl '\n'
#define yes cout << "YES\n"
#define no cout << "NO\n"

void transformOuterLayer(V<V<char>>& grid, int N) {
    for (int layer = 0; layer < N / 2; ++layer) {
        int limit = N - 1 - layer;
        for (int i = layer; i < limit; ++i) {
            char top = grid[layer][i];
            char right = grid[i][limit];
            char bottom = grid[limit][limit - i + layer];
            char left = grid[limit - i + layer][layer];
            grid[layer][i] = left;
            grid[i][limit] = top;
            grid[limit][limit - i + layer] = right;
            grid[limit - i + layer][layer] = bottom;
        }
    }
}

void transformInnerLayer(V<V<char>>& grid, int N) {
    int layer = 1;
    int limit = N - 1 - layer;
    for (int i = layer; i < limit; ++i) {
        char top = grid[layer][i];
        char right = grid[i][limit];
        char bottom = grid[limit][limit - i + layer];
        char left = grid[limit - i + layer][layer];
        grid[layer][i] = left;
        grid[i][limit] = top;
        grid[limit][limit - i + layer] = right;
        grid[limit - i + layer][layer] = bottom;
    }
}

void solve() {
    int N;
    cin >> N;
    V<V<char>> grid(N, V<char>(N));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> grid[i][j];
        }
    }
    transformOuterLayer(grid, N);
    transformInnerLayer(grid, N);
    for (const auto& row : grid) {
        for (char ch : row) {
            cout << ch;
        }
        cout << nl;
    }
}

signed main() {
    int t = 1;
    while (t--) {
        solve();
    }
    return 0;
}
