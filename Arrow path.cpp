#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define str string
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
    int n,i,f=0;
    cin>>n;
    str s1,s2;
    cin>>s1>>s2;
    for( i=0;i<n;i++){
    if(i%2==0 && s1[i]){

    }
    else
    {
        f=1;

    }
    if(f==1){
     if(i%2==0 && s2[i]=='<'){
        break;
     }
    }
    }
   if(i<n-1)
   no;
   else
   yes;
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
