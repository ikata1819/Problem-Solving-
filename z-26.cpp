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
    int n, m, k;
    cin >> n >> m >> k;
    vi a(n), b(m);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int answer = 0,i=0,j=0;
    while (i<n && j<m) {
       if(abs(a[i]-b[j])<=k){
        j++;
        i++;
        answer++;
       }
       else if(a[i]-b[j]>k){
        j++;
       }
       else{
        i++;
       }
    }
    cout << answer << '\n';
}

signed main()
{
    int t=1;
     //cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}
