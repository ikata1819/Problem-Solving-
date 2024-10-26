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
    while( t--)
    {
        double ab,bc,ac,x,y,z,ans,theta,alpha;
        cin>>ab>>bc;
        ac=sqrt((ab*ab)+bc*bc);
        theta= asin(ab/ac);
        alpha=asin(bc/ac);
        y=cos(theta)*bc;
        x=cos(alpha)*ab;
        z=sin(alpha)*ab;
        ans=(x*x)+y*z-z*z;
        cout<<fixed<<setw(6)<<ans<<endl;

    }

    return 0;
}
