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

bool isSorted(const vector<int>& arr) {
    for (int i = 0; i < arr.size() - 1; ++i) {
        if (arr[i] > arr[i + 1]) {
            return false;
        }
    }
    return true;
}
void solve() {
    int n,f=1;
    cin >> n;
    vi a(n);

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

if(isSorted(a))
   yes;
else{
  for(int i = 0; i < n-1; i++) {
        int m=*min_element(a.bg+i,a.ed);
        if(a[i]>=10 && a[i]!=m){
            int d2=a[i]%10;
            int d1=a[i]/10;
            if(d1>d2){
                f=0;
                break;
            }
            else if(d2>a[i+1]){
                f=0;
                break;
            }

        }
    }
    if(f)
        yes;
    else
        no;

}



}

signed main() {
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}
