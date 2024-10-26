#include <bits/stdc++.h>
using namespace std;

vector<int> div_count;

bool cmp(int a, int b) {
    if (div_count[a] == div_count[b]) {
        return a > b;
    }
    return div_count[a] < div_count[b];
}

int main() {
    int t;
    cin >> t;

    div_count.resize(1001, 0);

    for (int i = 1; i <= 1000; i++) {
        for (int j = 1; j <= i; j++) {
            if (i % j == 0)
                div_count[i]++;
        }
    }

    vector<int> indices(1001);

    for (int i = 1; i <= 1000; i++) {
        indices[i]=i;
    }
    sort(indices.begin(), indices.end(), cmp);

    for (int x = 1; x <= t; x++) {
        int n;
        cin >> n;
        cout << "Case " << x << ": " << indices[n] << endl;
    }

    return 0;
}
