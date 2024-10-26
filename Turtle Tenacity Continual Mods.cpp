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


void solve()
{
    int n,f=1,ff=1;
    cin>>n;
    vi a;
     int cone=0;
    forloop
    {
        int x;
        cin>>x;
        if(x==1)
            cone++;
        a.pb(x);
    }


    if(cone>1)
        f=0;
    int mini=*min_element(a.bg,a.ed);

    cone=0;
    forloop{
         if(a[i]==mini)
            cone++;
    }
    forloop
    {
        if(a[i]%mini!=0)
        {
            ff=0;
            break;
        }

    }
//cout<<"cone "<<cone<<endl;
    if(ff==1 && cone>1 )
    {
        f=0;

    }
    if(f)
        cout<<"yes\n";
    else
        cout<<"no\n";
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
/* for(int i=0;i<n;i++){

}
*/
