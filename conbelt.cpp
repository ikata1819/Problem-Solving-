#include <bits/stdc++.h>
using namespace std;




int main() {
    int t;
    long long x1, x2, y1, y2, n, l1, l2, ans,a1,a2;
    cin >> t;

    while (t--) {
        cin >> n >> x1 >> y1 >> x2 >> y2;

        a1=min(x1,n-x1+1);
        a2=min(y1,n-y1+1);
        l1=min(a1,a2);
        a1=min(x2,n-x2+1);
        a2=min(y2,n-y2+1);
        l2=min(a1,a2);
        ans = abs(l1 - l2);
        cout << ans << endl;
    }

    return 0;
}






