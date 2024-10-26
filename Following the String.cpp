#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define S string
#define V vector
#define Us unordered_set
#define Um unordered_map
#define len length

void solve(){
    int n;
    cin >> n;
    int a[n + 5];
    for(int i = 0; i < n; i++){
       cin >> a[i];
    }
    string s(n, ' '); // Initialize string s with size n
    char ch;
    int count[n + 5] = {0};
    for(int i = 0; i < n; i++){
        ch = count[a[i]] + 97;
        s[i] = ch;
        count[a[i]]++;
    }
    cout << s << endl;
}

int main() {
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}
