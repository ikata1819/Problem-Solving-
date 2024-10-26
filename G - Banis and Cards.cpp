#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define S string
#define V vector
#define Us unordered_set
#define Um unordered_map

int main() {
    int t;
    cin>>t;
    while(t--){
      ll m,n,mul;
      cin>>n>>m;

        mul=n/m;
        mul=mul*(mul+1)/2;
        mul*=m;
        cout<<mul<<endl;
    }

    return 0;
}
