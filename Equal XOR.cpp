#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(2*n);
        unordered_map<int, vector<int>> indices;
        for (int i = 0; i < 2*n; ++i) {
            cin >> a[i];
            indices[a[i]].push_back(i);
        }

        int XOR = 0;
        for (int ai : a) {
            XOR ^= ai;
        }

        vector<int> l, r;
        for (int ai : a) {
            if (l.size() < 2*k) {
                int target = ai ^ XOR;
                if (indices.count(target) && indices[target].size() > 0) {
                    l.push_back(ai);
                    r.push_back(target);
                    indices[target].pop_back();
                    indices[ai].pop_back();
                }
            } else {
                break;
            }
        }

        for (int i = 0; i < 2*k; ++i) {
            cout << l[i] << " ";
        }
        cout << endl;
        for (int i = 0; i < 2*k; ++i) {
            cout << r[i] << " ";
        }
        cout << endl;
    }
}

int main() {
    solve();
    return 0;
}
