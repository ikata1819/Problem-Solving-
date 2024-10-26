#include<bits/stdc++.h>
using namespace std;

vector<int> NGE (unordered_set<int> &s,vector<int> &v){
    vector<int> nge(v.size());
    vector<int> ans;
    stack <int> st;
    for(int i=0;i<v.size();i++){
        while(!st.empty() && v[i]> v[st.top()]){
            nge[st.top()]=i;
            st.pop();
        }
        st.push(i);
    }
     while(!st.empty()){
            nge[st.top()]=-1;
            st.pop();
        }
    for(int i=0;i<v.size();i++){
       if(s.find(v[i])!=s.end()){
            if(nge[i]!=-1)
         ans.push_back(v[nge[i]]);
       else
         ans.push_back(-1);
       }

    }
    return ans;
}

int main()
{   int n,m;
cin>>n>>m;
    unordered_set <int> s;
     for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        s.insert(x);
    }
    vector <int> v(m);
    for(int i=0; i<m; i++)
    {
        cin>>v[i];
    }
    vector<int> nge=NGE(s,v);
    for(auto it: nge){
        cout<<it<<endl;
    }
    return 0;
}
