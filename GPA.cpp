// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#define NoSubj 3

class Student{
private:
    int roll; // input
    float GP[NoSubj];// input
    float CGPA;

    static float credit[NoSubj];
public:
    static int noOfStudents;
    Student();
    void input();
    void calculateCGPA();
    //void sortStudents();
    void display();
    float getCGPA(){ return CGPA;}


};
float Student :: credit[NoSubj]={3, 2, 3};
int Student :: noOfStudents = 2;

Student :: Student()
{
    CGPA=0;
}
void Student :: input()
{
    cout<<"Enter New Student Information: ";
    cout<<"Roll:";
    cin>>roll;
    cout<<"Grade points: "<<endl;
    for(int i=0; i<NoSubj; i++)
    {
       cout<<"Subject "<< i+1 <<": ";
       cin>>GP[i];
    }
}


void Student :: calculateCGPA()
{   float totCredit=0;
    for(int i=0; i<NoSubj; i++)
    {
        CGPA += GP[i] * credit[i];
        totCredit += credit[i];
    }
    CGPA /= totCredit;
}


void Student :: display()
{
    cout<<"Roll:"<<roll<<" Grade points: ";
    for(int i=0; i<NoSubj; i++)
    {
       cout<<" Subject "<< i+1 <<": "<<GP[i];
    }

    cout<<" CGPA: "<<CGPA<<endl;
}

void mySwap(Student& s1, Student& s2)
{
    Student temp;

    temp = s1;
    s1 = s2;
    s2 = temp;
}

void SortStudents(Student arr[])
{
    int i, j;
    float k, l;
    bool swapped;
    for (i = 0; i < Student::noOfStudents - 1; i++) {
        swapped = false;
        for (j = 0; j < Student::noOfStudents - i - 1; j++) {
            k = arr[j].getCGPA();
            l = arr[j + 1].getCGPA();
            if (arr[j].getCGPA() > arr[j + 1].getCGPA()) {
                mySwap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        // If no two elements were swapped
        // by inner loop, then break
        if (swapped == false)
            break;
    }
}


int main() {
    // Write C++ code here
    //std::cout << "Hello world!";
    cout<<"Enter # of students:";
    cin>>Student::noOfStudents;
    //Student
    Student S[Student::noOfStudents];

    for(int i=0; i<Student::noOfStudents; i++)
    {
        S[i].input();
        S[i].calculateCGPA();
    }

    SortStudents(S);

    for(int i=0; i<Student::noOfStudents; i++)  S[i].display();



    return 0;
}
