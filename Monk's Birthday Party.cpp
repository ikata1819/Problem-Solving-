#include<bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin>>n;
  map<int,multiset<string>> m;
  for(int i=0;i<n;i++){
    string name;
    int mark;
    cin>>name>>mark;
    m[-1*mark].insert(name);
  }
  for(auto &it : m){
    int marks=it.first;
    auto &n=it.second;
    for(auto &print : n){
        cout<<print<<" "<<-1*marks<<endl;
    }
  }


return 0;
}
