#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define float double
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


int countTrailingZeros(int n)
{
    int count = 0;
    for (int i = 5; n / i >= 1; i *= 5)
    {
        count += n / i;
    }
    return count;
}


void solve()
{

    int n = 100;
    cout << "Number of trailing zeros in the factorial of " << n << " is: " << countTrailingZeros(n) << std::endl;
}

signed main()
{
    int t=1;
//  cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}
/* for(int i=0;i<n;i++){

}
*/
