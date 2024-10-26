#include <bits/stdc++.h>
using namespace std;

int  main ()
{
    int t,n,q,tp,l,r;
    bool g;
    int x;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n+5];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        string s;
        cin>>s;
        while(q--){
                x=0;
            cin>>tp;
            if(tp==1){
                cin>>l>>r;
                for(int i=l;i<=r;i++){
                        if(s[i]==1)
                    s[i]=0;
                else
                    s[i]=1;
                }
            }
            else{
                cin>>g;
                 for(int i=0;i<n;i++){
                   if(s[i]==g){
                    x=x^a[i];
                   }
                }
                cout<<x<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
