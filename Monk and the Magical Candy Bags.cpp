#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while(t--){
		int n,k;
		cin>>n>>k;
		multiset <long long > s;
		for(int i=0;i<n;i++){
			long long a;
			cin>>a;
			s.insert(a);
		}
		long long ans=0;
		for(int i=0;i<k;i++){
			auto it=s.end();
			it--;
			long long a=(*it);
			ans+=a;
			s.erase(it);
			//cout<<ans<<endl;
			s.insert(a/2);

		}
		cout<<ans<<endl;
	}
}
