#include<stdio.h>
int main()
{
	int a,b;
	printf("\nEnter a,b values:");
	scanf("%d%d",&a,&b);
	a=a^b;
	b=a^b;
	a=a^b;
	printf("\nAfter swap a=%d  b=%d\n",a,b);
	return 0;
}

