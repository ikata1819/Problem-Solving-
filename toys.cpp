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

void solve() {
    int n, a1, k, p;
    cin >> n >> a1 >> k >> p;

    priority_queue<int, vector<int>, greater<int>> minHeap;

    int currentValue = a1;

    forloop {

        if (minHeap.size() < 5) {
            minHeap.push(currentValue);
        } else if (currentValue > minHeap.top()) {
            minHeap.pop();
            minHeap.push(currentValue);
        }


        currentValue = (currentValue * k) % p;
    }


    vector<int> result;
    while (!minHeap.empty()) {
        result.pb(minHeap.top());
        minHeap.pop();
    }


    sort(result.bg, result.ed);


    for (size_t i = 0; i < result.size(); i++) {
        cout << result[i];
        if (i < result.size() - 1) {
            cout << " ";
        }
    }
    cout << nl;
}

signed main() {
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
