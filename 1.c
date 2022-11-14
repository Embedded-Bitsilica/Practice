#include<stdio.h>
<<<<<<< HEAD
//#include<signal.h>
int main()
{
	printf("Hello...\n");
	//signal(2,SIG_IGN);
	//signal(3,SIG_IGN);
=======
#include<signal.h>
int main()
{
	printf("Hello...\n");
	signal(2,SIG_IGN);
	signal(3,SIG_IGN);
	printf("bahut jagah hai\n");
>>>>>>> fa568542f68cb997518b3eb1d042e6963ce212fa
	while(1);
}
