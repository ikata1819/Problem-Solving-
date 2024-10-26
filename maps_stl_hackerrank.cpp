#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	map<string,int> m;
	while(t--){

        int type,y;
        string x;
        cin>>type;
        if(type==1){
            cin>>x>>y;
            m[x]=m[x]+y;
            //cout<<m[x]<<endl;
        }
    else if (type==2){
            cin>>x;
        m[x]=0;
    }
    else
    {
        cin>>x;
        auto it=m.find(x);
        if(it!=m.end())
        cout<<it->second<<endl;
        else
            cout<<"0"<<endl;
    }
	}
return 0;
}
