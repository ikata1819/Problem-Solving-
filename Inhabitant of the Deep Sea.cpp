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
    int n,k,ct=0;
    cin>>n>>k;
    vi a(n);
    forloop{
        cin>>a[i];
    }
    int i=0,j=n-1;
    while(k>0 && i<=j){

        if(i==j){
            if(a[i]<=k){
                ct++;
                k-=a[i];
            }
        }
        if(a[i]<a[j]){

            a[j]-=a[i];
            k-=2*a[i];
            ct++;
            i++;
        }
        else {

            a[i]-=a[j];
            k-=2*a[j];
            ct++;
            if(a[i]==0){
                ct++;
                i++;
            }
            j++;
        }


    }
  cout<<ct<<nl;
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
