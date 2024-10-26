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
void solve()
{
    int n;
    cin>>n;
    vector<string> a(3);
    for(int i=0; i<2; i++)
    {
        cin>>a[i];
    }
    string ans="";
    int i=0,j=0,cnt=0;
    while( j<n)
    {
        if()
      if(i==0){
        if(a[0][j+1]==0 && a[0][j]==1){
             ans+='0';
             j++;
        }
        if(a[0][j+1]==1 && a[0][j]==0){
             ans+='0';
             i=1;
        }
        if(a[0][j+1]==0 && a[0][j]==0){
             ans+='0';
             j++;
        }
      }
    }
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
