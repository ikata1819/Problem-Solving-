#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define S string
#define V vector
#define Us unordered_set
#define Um unordered_map
#define len length
string text;
void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int f=INT_MAX,l=INT_MIN;
    for(int i=0; i<n; i++ )
    {
        if(s[i]=='B')
        {
            if(i<f)
                f=i;
            if(i>l)
                l=i;
        }
    }
    cout<<l-f+1<<endl;
}

int main()
{
    int t=1;
    cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}
