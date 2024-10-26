#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define S string
#define V vector
#define Us unordered_set
#define Um unordered_map

int main() {
    int n;
    cin>>n;
    int a[n+5];
    int c[5]={0};
    for(int i=0;i<n;i++){
        cin>>a[i];
        c[a[i]]++;
    }
    int ans;
    if(c[1]>c[3])
    c[1]=c[1]-c[3];
    else
        c[1]=0;
    c[2]=(c[2]*2)+c[1];
    ans=c[4]+c[3]+ceil(c[2]/4.0);
    cout<<ans<<endl;
    return 0;
}
