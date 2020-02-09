#include<iostream>
using namespace std;
struct student 
{
    char usn[20];
    char name[40];
    int marks;
};
student *accept();
int main()
{
    int n=5;
    student p[5]={0};
    for(int i=0;i<n;i++)
    {
        p[i]=*(accept());
    }
}
student *accept()
{
    student *t=0;
    t= new student;
    cout<<"enter the usn,name and usn:"<<endl;
    cin>>t->name>>t->name>>t->marks;
    return t;
}