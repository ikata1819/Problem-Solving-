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

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to find the LCM of two numbers
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

// Function to find the LCM of multiple numbers
int lcmOfArray(vi arr, int n) {
    int result = arr[0];
    for (int i = 1; i < n; i++) {
        result = (result * arr[i]) / gcd(result, arr[i]);
    }
    return result;
}

void solve()
{
    int n;
    cin>>n;
    vi a(n);
    int gcd=0,pro=1,lcm;
    forloop
    {
        cin>>a[i];
    }

    cout<<lcmOfArray(a,n)<<nl;

}

signed main()
{
    int t=1;
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}
