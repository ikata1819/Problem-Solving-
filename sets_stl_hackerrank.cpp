#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	set <int> s;
	while(t--){
		int x,y;
		cin>>y>>x;
		if(y==1){
            s.insert(x);
		}
		else if (y==2){
                auto it=s.find(x);
                if(it!=s.end())
            s.erase(it);
		}
		else
        {
            auto it=s.find(x);
            if(it!=s.end())
                cout<<"Yes\n";
            else
                cout<<"No\n";
        }
	}
return 0;
}
