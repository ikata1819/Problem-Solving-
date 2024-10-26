#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
        cout<<"Enter Size of the vector\n";
        cin>>n;
        sum=0;
        vector <int> v;
        cout<<"maximum size vector can hold is "<<v.max_size()<<endl;
        cout<<"Enter vector elements:\n";
        for(int i=0; i<n; i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }
        cout<<"Printing vector using indexing\n";
         for(int i=0; i<v.size(); i++
         )
        {
            cout<<v[i]<<" ";
        }
         cout<<endl;
         cout<<"Printing array in reverse using reverse iterator\n";
       vector <int> :: reverse_iterator it;
        for( it=v.rbegin(); it!=v.rend(); it++)
        {
           cout<<*it<<" ";
        }
        cout<<endl;
        v.erase(v.begin());
        cout<<"Array after erasing first element\n";
         vector <int> :: iterator i;
        for( i=v.begin(); i!=v.end(); i++)
        {
           cout<<*i<<" ";
        }
         cout<<endl;
        v.clear();
        if(v.empty()==1){
            cout<<"The vector is empty now\n";
        }
    return 0;
}
