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

vector<int> multiply(const vector<int>& a, int b) {
    vector<int> result;
    int carry = 0;

    for (int digit : a) {
        int product = digit * b + carry;
        result.push_back(product % 10);
        carry = product / 10;
    }

    while (carry) {
        result.push_back(carry % 10);
        carry /= 10;
    }

    return result;
}

void solve()
{

    int n;
   cin>>n;
   vi fact;
   fact.pb(1);
   for(int i=2;i<=n;i++){
       fact=multiply(fact,i);
   }
   for (auto it = fact.rbegin(); it != fact.rend(); ++it) {
        cout << *it;
    }
    cout<<nl;

}

signed main()
{
    int t=1;
    // cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}
