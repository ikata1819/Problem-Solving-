#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m;
    cin>>t;
    while(t--){
        cin>>n>>m;
        char a[n+5][m+5];
        char comp[]="vika";
        for(int i=0;i<n;i++)
            cin>>a[i];
            int k=0,f=0,c=0;
         for(int i=0;i<n;i++){
            for(int j=c;j<m;j++){
                    cout<<a[i][j]<<" "<<comp[k]<<endl;
                if(a[i][j]==comp[k]){
                    f++;
                    k++;
                    break;
                }
                if(k==4)
                    break;

            }
            c++;
         }
            cout<<f;
            if(f==4)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
    }



    return 0;
}
