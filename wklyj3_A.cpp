#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define S string
#define V vector
#define Us unordered_set
#define Um unordered_map

int main()
{
    int n;
    cin>>n;
    int a[n+6];
    set <int> s;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        s.insert(a[i]);
    }
    ll sum=0;
     for ( auto& element : s) {
       sum+=element;
     }
     int i=1;
      auto it=s.begin();
     if(s.size()>1 && (*it)==0 ){
        cout<<"Impossible\n";
        return 0;
     }
     if(sum<=n){
        cout<<"Possible\n";
        for ( auto& element : s) {
            int j=element;
            if(j==0)
                j=n;
           while(j--){
            cout<<i<<" ";
           }
           i++;
     }
     cout<<endl;
     }
     else
        cout<<"Impossible\n";

    return 0;
}

