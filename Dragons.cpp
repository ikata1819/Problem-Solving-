#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define S string
#define V vector
#define Us unordered_set
#define Um unordered_map


int main()
{
    int s,n;
    cin>>s>>n;
    vector <pair<int,int>> xy;
    for(int i=0;i<n;i++){
    int x,y;
    cin>>x>>y;
    xy.push_back(make_pair(x,y));
    }
    sort(xy.begin(),xy.end());
    for(auto &it : xy ){
        if(s> it.first){
            s+=it.second;
        }
        else{
            cout<<"NO";
            return 0;
        }

    }
    cout<<"YES";
    return 0;
}
