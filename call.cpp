#include<iostream>
using namespace std;
void display(int *a);
int main()
{
    int a=10;
    display(&a);
}
void display(int *a)
{
    cout<<a;
}