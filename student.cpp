#include<iostream>
using namespace std;

class Student
{ public:
    char name[50];
    int roll;

void getdata(){
    cout<<"Enter student name:"<<endl;
    cin>>name;
    cout<<"Enter roll number of student:"<<endl;
    cin>>roll;
}
void showdata()
{
    cout<<"Enter student name:"<<name<<endl;
    cout<<"Enter roll number of student:"<<roll<<endl;
}
};

class Exam:public Student
{
public:

int math_marks;
int phy_marks;
int bce_marks;
int eng_marks;
int hin_marks;
int prac_marks;


void getmark()
{
    cout<<"Enter the mark of 1st subject:"<<endl;
    cin>>math_marks;
     cout<<"Enter the mark of 2nd subject:"<<endl;
    cin>>phy_marks;
     cout<<"Enter the mark of 3rd subject:"<<endl;
    cin>>bce_marks;
    cout<<"Enter the mark of 4th subject:"<<endl;
    cin>>eng_marks;
     cout<<"Enter the mark of 5th subject:"<<endl;
    cin>>hin_marks;
     cout<<"Enter the mark of 6th subject:"<<endl;
    cin>>prac_marks;
}
void showmark(){
    cout<<"Enter the mark of 1st subject:"<<math_marks<<endl;
    cout<<"Enter the mark of 2nd subject:"<<phy_marks<<endl;
     cout<<"Enter the mark of 3rd subject:"<<bce_marks<<endl;
      cout<<"Enter the mark of 4th subject:"<<eng_marks<<endl;
    cout<<"Enter the mark of 5th subject:"<<hin_marks<<endl;
     cout<<"Enter the mark of 6th subject:"<<prac_marks<<endl;
}
};

class Result:public Exam
{ 
    public:
 int total_marks;

void showtotal()
{
    total_marks=math_marks+phy_marks+bce_marks+eng_marks+hin_marks+prac_marks;
    
    cout<<"Total Marks of "<<name<<":"<<total_marks<<endl; 
}
};

int main()
{
    Result r;
r.getdata();
r.showdata();
r.getmark();
r.showmark();
r.showtotal();
    return 0;
}