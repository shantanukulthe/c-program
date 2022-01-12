////divide two number 

#include<stdio.h>
int divide(int a, int b);
int main()
{	
	int x,y,iret;
		
	printf("enter two number \n");
	scanf("%d %d ",&x,&y);
		
	iret=divide(x,y);
		
	printf("division of two number is  %d",iret);
		
	return 0;
}
		
int divide(int a,int b)
{
	int div;
	
	div=a/b;
		
			
	return div;
}
	