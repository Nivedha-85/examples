#include<iostream>
using namespace std;
struct student 
{
    char usn[20];
    char name[40];
    int marks;
};
student accept();
int main()
{
    student a=accept();
    cout<<"usn,name and marks are:"<<a.usn<<" "<<a.name<<" "<<a.marks<<endl;
}
student accept()
{
    student t;
    cout<<"enter the usn,name and marks:"<<endl;
    cin>>t.usn>>t.name>>t.marks;
    return t;
}