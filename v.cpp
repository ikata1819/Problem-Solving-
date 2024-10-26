#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter Size of array\n";
    cin>>n;
    vector <int> v;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    for(int i=n-1; i>=0; i--)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    vector <int> :: reverse_iterator it;
    for( it=v.rbegin(); it!=v.rend(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    cout<<"size = "<<v.size()<<endl;
    cout<<"maxsize = "<<v.max_size()<<endl;
    cout<<"is vector empty? "<<v.empty()<<endl;
    cout<<"vector at position 1 is "<<v.at(1)<<endl;
    v.erase(v.begin());
    cout<<"size after erase = "<<v.size()<<endl;
    v.clear();
    cout<<"size after clearing the vector = "<<v.size()<<endl;
    cout<<"is vector empty? "<<v.empty()<<endl;




    return 0;
}
