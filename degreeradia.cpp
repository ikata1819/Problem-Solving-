#include<bits/stdc++.h>

using namespace std;

int main()
{
    double pi= 2*acos(0);
    //cout<<pi<<endl;
    double x;
    cin>>x;
    double radian=x*pi/180;
    //cout<<radian;
    cout<<fixed<<setprecision(10)<<"sin(x) = "<<sin(radian)<<endl;
    cout<<fixed<<setprecision(10)<<"cos(x) = "<<cos(radian)<<endl;
    cout<<fixed<<setprecision(10)<<"tan(x) = "<<tan(radian)<<endl;

}
