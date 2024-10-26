#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define S string
#define V vector
#define Us unordered_set
#define Um unordered_map

int main()
{
    int t;
    cin>>t;
    int i=t;
    while(t--)
    {
        cout<<"Case "<<i<<":"<<endl;
        int n,q;
        cin>>n>>q;
        int st,ed,in;
        vector<ll> myVector;
        for(int j=0; j<n; j++)
        {
            cin>>in;
            myVector.push_back(in);
        }

        while(q--)
        {

            cin>>st>>ed;
            int ans= (upper_bound(myVector.begin(),myVector.end(),ed)-myVector.begin())-(lower_bound(myVector.begin(),myVector.end(),st)-myVector.begin());

            cout<<ans<<endl;
        }
    }
    return 0;
}
