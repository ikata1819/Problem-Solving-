#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define S string
#define V vector
#define Us unordered_set
#define Um unordered_map

int main()
{
    int t,n,k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        char ch;
        int nk=n/k;
        for(int i=0;i<k;i++){
                ch=i+97;
            for(int j=0;j<nk;j++){
                cout<<ch;

            }
             n-=nk;
        }
        if(n>0){
                ch=k+96;
                for(int i=0;i<n;i++)
            cout<<ch;
        }
        cout<<endl;
    }
    return 0;
}

