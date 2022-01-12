/////  accept  two number from user and print first number second number of times


#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL checkevenodd(int no)
{
	
		if(no%2==0)
		{
			return 1;
		}
		else
		{
			return 0;
		}
			
	
}
	
	
	
	
int main()
{
	int no1, iret;
	
	printf("enter the number");
	scanf("%d", &no1);
	
   iret= checkevenodd(no1);

	if(iret==1)
		{
			printf(" even number");
		}
	else
		{
			printf(" odd number");
		}
			
	return 0;
}	