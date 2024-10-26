#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define float double
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

int minCoins(vector<int>& coins, int target) {
    sort(coins.begin(), coins.end(), greater<int>()); // Sort coins in descending order

    int coinCount = 0; // Initialize the count of coins

    for (int i = 0; i < coins.size(); i++) {
        if (target == 0) break; // If target becomes 0, we're done
        if (coins[i] <= target) {
            // Determine how many coins of this denomination can be used
            int numCoins = target / coins[i];
            // Update the count of coins used
            coinCount += numCoins;
            // Update the remaining target value
            target -= numCoins * coins[i];
        }
    }

    if (target == 0) return coinCount; // If target becomes 0, return the coin count
    else return -1; // If target is not reached, return -1
}

void solve() {
    int n;
    cin >> n;
    vector<int> coins = {1, 3, 6, 5, 10, 15};
    cout << minCoins(coins, n) << nl;
}

signed main() {
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
