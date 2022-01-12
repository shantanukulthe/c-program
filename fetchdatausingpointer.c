////// fetching a data using pointer


#include<stdio.h>
int main()
{
	int no=11;
	
	int*p=&no;
	
	printf("%d",no);
	printf("%d",&p);
	
	
	return 0;
	
	}