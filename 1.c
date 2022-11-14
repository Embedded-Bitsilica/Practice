#include<stdio.h>
#include<signal.h>
int main()
{
	printf("Hello...\n");
	signal(2,SIG_IGN);
	signal(3,SIG_IGN);
	printf("bahut jagah hai\n");
	while(1);
}
