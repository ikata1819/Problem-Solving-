#include<bits/stdc++.h>
using namespace std;
int main(){
  int a,b,c;
  cin>>a>>b>>c;
  int exp[6];
  exp[0]=a+b+c;
  exp[1]=a*b*c;
  exp[2]=a+b*c;
  exp[3]=a*b+c;
  exp[4]=(a+b)*c;
  exp[5]=a*(b+c);
  int max=exp[0];
  for(int i=1;i<6;i++){
    if(exp[i]>max)
        max=exp[i];
  }
  cout<<max<<endl;

}
