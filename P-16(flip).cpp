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
int a[100000],n;
int insertionSort() {
    int ct=0;

    for (int i = 1; i < n; ++i) {
        int key = a[i];
        int j = i - 1;
        while (j >= 0 && a[j] > key) {
            a[j + 1] = a[j];
            --j;
            ct++;
        }
        a[j + 1] = key;
    }
    return ct;
}
void solve()
{



    while(scanf("%d",&n)==1){
            if(n==0)
            break;

    forloop
    {
        int x;
        scanf("%d",&a[i]);

    }


   cout<<"Minimum exchange operations : " <<insertionSort()<<nl;
    }

}

signed main()
{
    int t=1;
     //cin>>t;
    while(t--)
    {
        solve();
    }

    return 0;
}
