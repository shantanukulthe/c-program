///////accept number from user and print that numbers even factor

#include<stdio.h>
void factors(int no);
int main()
{
	int no;
	
	printf("enter the number");
	scanf("%d",&no);
	
	factors(no);
	
	return 0;
	
}

void factors(int no)
{
		if(no<=0)
		{
			no=-no;
		}
		
		for(int i=1;i<=no/2;i++)
			{
					if((no%i==0)&&(i%2)==0)
						{
							printf("%d  \n",i);
						}
			}
}			