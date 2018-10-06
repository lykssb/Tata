#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b;
	a = 1;
	b = 0;
	while (a<=100)
	{
	printf("%d\n",	b = b + a++);
	}
	printf("100以内的整数和:%d\n",b);
	return 0;
}
