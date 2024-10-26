#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n+5];
        int sum=0,c=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
        }

        for(int i=0;i<n;i++){
        int x=sum-(2*a[i]);
           if(x%2==0)
           c++;
        }
        cout<<c<<endl;
    }

    return 0;
}
