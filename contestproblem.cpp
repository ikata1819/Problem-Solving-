#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int c[100005]={0};
        int n,aa=0,b=0;
        cin>>n;
        int a[n+5];
        int u=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(c[a[i]]==0){
                u++;
            }
            c[a[i]]++;

        }

        if(u>2)
            cout<<"no"<<endl;
        else{
                 aa=c[a[0]];
        for(int i=1;i<n;i++){
                if(a[i]!=a[0]){
                     b=c[a[i]];
                    break;
                }
        }
        //printf("u=%d a=%d b=%d\n",u,aa,b);
        if(u==1 ||  n<=3)
            cout<<"YES"<<endl;
        else if(n%2==0 && aa==b)
            cout<<"YES"<<endl;
        else if(abs(aa-b)<=1)
        cout<<"YES"<<endl;
        else
        cout<<"no"<<endl;



        }

    }

    return 0;
}
