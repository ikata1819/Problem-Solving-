#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>

using namespace std;

bool com(pair<string, string> a, pair<string, string> b) {
    return a.first > b.first;
}

void solve() {
    int n;
    scanf("%d", &n); // Using scanf for input
    getchar(); // Ignore the newline character after reading integer input
    string name, s;
    vector<pair<string, string>> v;
    for (int i = 0; i < n; i++) {
        getline(cin, name);
        int len = name.length();

        string temp = name.substr(len - 4); // Use string instead of char array
        s = name.substr(0, len - 5);
        v.push_back(make_pair(temp, s));
    }
    sort(v.begin(), v.end(), com);
    for (int i = 0; i < n; i++) {
        printf("%s\n", v[i].second.c_str()); // Using printf for output
    }
}

int main() {
    int t = 1;
    scanf("%d", &t); // Using scanf for input
    while (t--) {
        solve();
    }

    return 0;
}
