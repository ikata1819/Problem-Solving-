#include <iostream>
#include <vector>
#include <unordered_set>
#include <unordered_map>
#include <cmath>

using namespace std;

#define ll long long
#define STR string
#define vi vector<ll>
#define V vector
#define usii unordered_set<ll>
#define umii unordered_map<ll, ll>
#define um unordered_map
#define us unordered_set
#define BG begin()
#define ED end()
#define PB push_back
#define FORLOOP for(ll i = 0; i < n; i++)

void find_factors() {
    ll num1, num2, limit;
    cin >> num1 >> num2 >> limit;
    vi factors_num1, factors_num2;
    umii freq_map;
    ll count = 0;
    ll power = 0;

    while (pow(num1, power) <= limit) {
        factors_num1.PB(pow(num1, power));
        power++;
    }
    power = 0;
    while (pow(num2, power) <= limit) {
        factors_num2.PB(pow(num2, power));
        power++;
    }

    for (ll i = 0; i < factors_num1.size(); i++) {
        for (ll j = 0; j < factors_num2.size(); j++) {
            if (limit % (factors_num1[i] * factors_num2[j]) == 0) {
                if (freq_map[factors_num1[i] * factors_num2[j]] == 0)
                    count++;
                freq_map[factors_num1[i] * factors_num2[j]]++;
            }
        }
    }
    cout << count << endl;
}

int main() {
    ll cases = 1;
    cin >> cases;
    while (cases--) {
        find_factors();
    }
    return 0;
}
