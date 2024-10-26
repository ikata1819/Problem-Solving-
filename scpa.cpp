#include <bits/stdc++.h>
using namespace std;

class Student
{
private:
    string name;
    int roll;
    float GP[5];
    float CGPA;
    int age;
    string BG;
    static float credit[5];

public:
    static int noOfStudents;
    Student();
    void inputcre();
    void calculateCGPA();
    float getCGPA()
    {
        return CGPA;
    };
    float getage()
    {
        return age;
    };
    int getid()
    {
        return roll;
    };
    void display();
    Student(string name,int x, int y, string bg, float gp[]);
};


float Student::credit[5] = {3, 3, 3, 3, 3};
int Student::noOfStudents = 2;

Student::Student()
{

}

void Student::inputcre()
{
    cout << "Enter credits of 5 courses:\n";
    for (int i = 0; i < 5; i++)
    {
        cout << "Credit of course " << i + 1 << ": ";
        cin >> credit[i];
    }
}

Student::Student(string n, int x, int y, string bg, float gp[])
{
    roll = x;
    age = y;
    BG = bg;
    name=n;
    for (int i = 0; i < 5; i++)
    {
        GP[i] = gp[i];
    }
}
void Student :: calculateCGPA()
{
    float totCredit=0;
    for(int i=0; i<5; i++)
    {
        CGPA += GP[i] * credit[i];
        totCredit += credit[i];
    }
    CGPA /= totCredit;
}
void Student :: display()
{

    cout<<"Name: "<<name<<", ID: "<<roll
        <<", Age: "<<age
        <<", Blood Group: "<<BG<<", ";
    cout<<"CGPA : "<<CGPA;
    cout<<endl;

}

bool cmp(Student a,Student b)
{

    if(a.getCGPA()==b.getCGPA())
    {
        if(a.getage()==b.getage())
            return a.getid()<b.getid();
        else
            return a.getage()<b.getage();
    }
    return a.getCGPA()>b.getCGPA();

}

int main()
{
    cout << "Enter the number of students:\n";
    cin >> Student::noOfStudents;

    Student S[Student::noOfStudents];


    S[0].inputcre();


    for (int i = 0; i < Student::noOfStudents; i++)
    {
        cin.ignore();
        int id, age;
        string bg,name;
        float gp[5];

        cout << "Enter name id, age, and blood group (example: O+) of Student:"<<i+1<<"\n";
        //cin.ignore();
        cin>>name;
        cin >> id >> age >> bg;

        cout << "Enter GPA of 5 courses:\n";
        for (int j = 0; j < 5; j++)
        {
            cin >> gp[j];
        }

        S[i] = Student(name,id, age, bg, gp);
        S[i].calculateCGPA();
    }
    for (int i = 0; i < Student::noOfStudents; i++)
    {
        cout<<"Information of Student "<<i+1<<": \n" ;
        S[i].display();
    }
    sort(S,S+Student::noOfStudents,cmp);
    cout<<endl<<endl;
    cout<<"*********Merit List*********\n";
    for (int i = 0; i < Student::noOfStudents; i++)
    {
        cout<<"Information of Student "<<i+1<<": \n" ;
        S[i].display();
    }
    return 0;
}
