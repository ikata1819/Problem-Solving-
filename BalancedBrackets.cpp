#include<bits/stdc++.h>
using namespace std;
unordered_map <char,int> sym={{'(',-1},{')',1},{'{',-2},{'}',2},{'[',-3},{']',3}};
string isBalanced(string s) {
 stack <char> st;
 for(char it:s){
    if(sym[it]<0){
        st.push(it);
    }
    else{
        if(st.empty()) return "NO";
        char top=st.top();
        st.pop();
        if(sym[top]+ sym[it])
             return "NO";
    }
 }
 if(st.empty())  return "YES";
  return "NO";
}
int main() {
    int n;
    cin>>n;
    while(n--){
    string s;
    cin>>s;
    cout<<isBalanced(s)<<endl;;
    }

    return 0;
}
