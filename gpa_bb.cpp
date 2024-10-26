#include<bits/stdc++.h>

using namespace std;

struct student
{
    int id,age;

    double gpa1,gpa2,avg_gpa;

    student()
    {

    }

    student(int x,int y, double a,double b)
    {
        id = x;
        age = y;
        gpa1 = a;
        gpa2 = b;
    }


};


bool cmp(student a,student b)
{
    return (a.avg_gpa>b.avg_gpa);

}

int main()
{

    int n; cin>>n;

    student x[50];

    int credit[2], total_credit = 0;

    for(int i = 0; i<2; i++)
    {
        cin>>credit[i];

        total_credit += credit[i];
    }

    cout << "tot _cre  = " << total_credit << endl;

    for(int i = 0; i<n; i++)
    {
        int id,age;
        double gp1,gp2;

        cin>>id>>age>>gp1>>gp2;

        x[i] = student(id,age,gp1,gp2);

        cout << x[i].id << " " << x[i].age << endl;
        cout << x[i].gpa1 << " " << x[i].gpa2 << endl;
    }

    for(int i = 0; i<n; i++)
    {
        double avg_gpa;

        avg_gpa = ((x[i].gpa1*credit[0])+x[i].gpa2*credit[1])/total_credit;
        x[i].avg_gpa = avg_gpa;
    }

    cout << "before sorting" << endl;
    for(int i = 0; i<n; i++)
    {
        cout << "id = "<< x[i].id << " and age = " << x[i].age <<endl;
        cout << "semester gpa = " << x[i].avg_gpa <<endl;
    }

    sort(x,x+n,cmp);

    cout << "after sorting" << endl;
    for(int i = 0; i<n; i++)
    {
        cout << "id = "<< x[i].id << " and age = " << x[i].age <<endl;
        cout << "semester gpa = " << x[i].avg_gpa <<endl;
    }

    return 0;
}
