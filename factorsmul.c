/////factors multiplication

#include<stdio.h>
int factormult(int no1)
{
	int isum=1;
	
	for(int i=1;i<=no1;i++)
	{
		if(no1%i==0)
		{
			isum=isum*i;
		}
	}
	
	return isum;
}
int main()
{
		int no;
		
		printf("enter no from user");
		scanf("%d",&no);
		
		int iret=factormult(no);
		
		printf("%d",iret);
		
		return 0;
}