#include<stdio.h>
int main()
{
	printf("Hello...\n");
	signal(2,SIG_IGN);
	signal(3,SIG_IGN);
	while(1);
}
