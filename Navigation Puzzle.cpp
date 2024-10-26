#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define S string
#define V vector
#define Us unordered_set
#define Um unordered_map

ll moves(ll  n, ll start, ll  end)
{

    ll clockwise = (end - start + n) % n;
    ll  anticlockwise = (start - end + n) % n;


    return min(clockwise, anticlockwise);
}
int main()
{
    ll x,a[4];
    cin>>x>>a[0]>>a[1]>>a[2];
    sort(a,a+3);
    ll at_a=moves(x,a[0],a[1])+moves(x,a[0],a[2]);
    ll at_b=moves(x,a[1],a[0])+moves(x,a[1],a[2]);
    ll at_c=moves(x,a[2],a[1])+moves(x,a[2],a[0]);
    ll ans=min(at_a,at_b);
    ans=min(ans,at_c);
    cout<<ans<<endl;
    return 0;
}

