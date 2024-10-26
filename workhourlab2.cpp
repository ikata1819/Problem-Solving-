#include <bits/stdc++.h>
using namespace std;

struct Time
{
    int hr;
    int m;
    int sec;
};
struct employee
{
    Time entry;
    Time exit;
};
void input(employee &e)
{
    cout<<"Enter the hour min second  for entry time"<<endl;
    cin>>e.entry.hr>>e.entry.m>>e.entry.sec;
    cout<<"Enter the hour min second  for exit time"<<endl;
    cin>>e.exit.hr>>e.exit.m>>e.exit.sec;
}
employee input()
{
    employee e;
    cout<<"Enter the hour min second  for entry time"<<endl;
    cin>>e.entry.hr>>e.entry.m>>e.entry.sec;
    cout<<"Enter the hour min second  for exit time"<<endl;
    cin>>e.exit.hr>>e.exit.m>>e.exit.sec;
    return e;
}
Time duration (employee &e)
{
    Time d;
    d.m=0;
    d.hr=e.exit.hr-e.entry.hr;
    if(e.entry.sec>e.exit.sec)
    {
        d.m--;
        d.sec=60-e.entry.sec+e.exit.sec;
    }
    else
        d.sec=e.exit.sec-e.entry.sec;

    if(e.entry.m>e.exit.m)
    {
        d.hr--;
        d.m=60-e.entry.m+e.exit.m;
    }
    else
        d.m=e.exit.m-e.entry.m;

    return d;
}
Time duration (Time en,Time ex )
{
    Time d;
    d.m=0;
    d.hr=ex.hr-en.hr;
    if(en.sec>ex.sec)
    {
        d.m--;
        d.sec=60-en.sec+ex.sec;
    }
    else
        d.sec=ex.sec-en.sec;

    if(en.m>ex.m)
    {
        d.hr--;
        d.m=60-en.m+ex.m;
    }
    else
        d.m=ex.m-en.m;

    return d;
}
void display (const Time &d)
{
    cout<<"Duration is "<<d.hr<<" Hour "<<d.m<<"minute "<<d.sec<<"second\n";
}
void salary(Time &d,float spw){
    float ans=float(d.hr)+float(d.m)/60+float(d.sec)/3600;
    ans*=spw;
cout<<"Total salary is "<<ans<<endl;
}
int main()
{
    employee e1,e2;
    Time d1,d2;
    float spw;
    cout<<"Enter salary per hour:\n";
    cin>>spw;
    cout<<"Take input for employee one:\n";
    e1=input();
    d1=duration(e1);
    display(d1);
    salary(d1,spw);
    cout<<"Take input for employee two:\n";
    input(e2);
    d2=duration(e2.entry,e2.exit);
    display(d2);
    salary(d2,spw);
}
