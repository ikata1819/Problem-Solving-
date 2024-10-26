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
void solve()
{
    string time,meri;
    cin>>time;
    int hour,min;
    hour= (time[0]-48)*10+ time[1]-48;
    min=  (time[3]-48)*10+ time[4]-48;
    //cout<<hour<<" "<<min<<nl;
    if(hour>=12){
        meri="PM";
        if(hour>12)
            hour-=12;
    }
    else{
        meri="AM";
        if(hour==0)
            hour=12;
    }
    if(hour<10)
        cout<<"0";
    cout<<hour<<":";
    if(min<10)
        cout<<"0";
    cout<<min<<" "<<meri<<nl;

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
