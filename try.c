#include<stdio.h>
int main()
{
    //void *p;
    int a=10;
    char*p = &a;
    printf("%d\n",*p);
    p++;
    //*((int*)p)++;
    printf("%d\n",*p);
}