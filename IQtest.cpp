#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define S string
#define V vector
#define Us unordered_set
#define Um unordered_map


int main()
{
    int n,c=0;
    cin>>n;
    int a[n+5];
    int oddeven[n+5]={0};
    for(int i=0; i<n ; i++){
            cin>>a[i];
            if(a[i]%2!=0){
                oddeven[i]=1;
                c++;
            }
    }
    for(int i=0; i<n ; i++){
            if(c>1){
                if(oddeven[i]==0)
                    cout<<i+1;
            }
            else
                if(oddeven[i]==1)
                cout<<i+1;
    }

    return 0;
}
