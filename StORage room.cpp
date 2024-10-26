#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define S string
#define V vector
#define Us unordered_set
#define Um unordered_map
ll find_a_b(ll &a,ll &b, ll c) {
     b = c & (~c);
     a = b ^ c;

}
int main()
{

    int t,n;
    ll a,b;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll m[n+5][n+5];
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                cin>>m[i][j];
            }
        }
        set <ll>s;
        set <ll>ans;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
               s.insert(m[i][j]);
            }
        }
        for ( auto& element : s) {
        find_a_b(a,b,element);
        if(a<pow(2,30) && b<pow(2,30)){
            ans.insert(a);
            ans.insert(b);
        }
    }
cout<<endl;
    for ( auto& element : s)
        cout << element << " ";
//    cout<<ans.size();
//    if(ans.size()==n){
//        cout<<"YES\n";
//         for ( auto& element : ans) {
//        cout << element << " ";
//    }
//    }
//    else
//        cout<<"NO\n";
    }

        return 0;
    }

