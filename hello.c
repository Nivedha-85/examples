#include<stdio.h>
int main()
{
	void *p=0;
	int a=10;
	p=&a;
	printf("%d",((int*)p));
}
