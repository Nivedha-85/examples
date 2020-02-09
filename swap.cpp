#include<iostream>
using namespace std;
struct student
{
    char usn[20];
    char name[20];
    int marks;
};
void accept(student &,student &);
void swap(student &,student &);
void display(student &,student &);
int main()
{
    student a,b;
    accept(a,b);
    swap(a,b);
    display(a,b);
}
void accept(student &a,student&b)
{
    cout<<"Enter the usn,name and marks for first student:"<<endl;
    cin>>a.usn>>a.name>>a.marks;
    cout<<"enter the usn,name,marks for the second student:"<<endl;
    cin>>b.usn>>b.name>>b.marks;
}
void swap(student &a,student &b)
{
    student t;
    t=a;
    a=b;
    b=t;
}
void display(student &a,student &b)
{
    cout<<"details of student 1 are:"<<endl;
    cout<<"usn:"<<" "<<a.usn<<" "<<"name:"<<" "<<a.name<<" "<<"marks:"<<" "<<a.marks<<endl;
    cout<<"details of student 2 are:"<<endl;
    cout<<"usn:"<<" "<<b.usn<<" "<<"name:"<<" "<<b.name<<" "<<"marks:"<<" "<<b.marks<<endl;
}