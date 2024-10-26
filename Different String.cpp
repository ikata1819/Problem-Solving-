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

  S s;
  cin>>s;
  int hash[26]={0};
  for(int i=0;i<s.length();i++){
  hash[s[i]-'a']++;
  }
  int ct=0;
     for(int i=0;i<26;i++){
     if(hash[i]>0)
     ct++;

  }
  char a,b;
  for(int i=1;i<s.length();i++){
     if(s[i-1]!=s[i]){
        char temp=s[i];
        s[i]=s[i-1];
        s[i-1]=temp;
        break;
     }
  }
  if(ct==1)
  no;
  else
  {
  yes;
  cout<<s<<nl;
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
