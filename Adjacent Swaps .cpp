#include<bits/stdc++.h>
using namespace std;
int main() {
int n,q,x,i,pos,p1,p2;
cin>>n>>q;
int a[n+5];
int place[n+5];
for( i=1;i<=n;i++){
    a[i]=i;
    place[i]=i;
}
while(q--){
    cin>>x;
    int p=place[x];
    if(p!=n){
        p1=p+1;
    }
    else
        p1=p-1;
    p2=a[p1];
    swap(a[p],a[p1]);
    swap(place[x],place[p2]);

}
for(int i=1;i<=n;i++){
    cout <<a[i]<<" ";
}
    return 0;
}
