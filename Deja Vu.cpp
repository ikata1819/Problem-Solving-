#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        long long  a[n+5];
        int x[q+5];
        for(int i=0;i<n;i++){
        cin>>a[i];
        }
         for(int i=0;i<q;i++){
        cin>>x[i];
        }
         for(int i=0;i<q;i++){
            long long p=pow(2,x[i]);
             for(int j=0;j<n;j++){
                if(a[j]%p==0){
                p=pow(2,x[i]-1);
                a[j]+=p;}
        }
        }
        for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
