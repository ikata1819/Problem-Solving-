#include<bits/stdc++.h>
using namespace std;

void privec(vector<int> &v){
    //cout<<"size of vector "<<v.size()<<endl;
for(int i=0;i<v.size(); i++){
    cout<<v[i]<<" ";
}
cout<<endl;
}
int main() {
   
    vector <int> v={2,4,6,8,10};
   
    for(int value : v){
       cout<<value<<" ";
    }
    

}
