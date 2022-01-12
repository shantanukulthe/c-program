///// constant


#include<stdio.h>
int main()
{
	
	const int no=11;
	const int* const p=&no;
	
		printf("%d ",no);
		//printf("%d ",no++);// as its constant variable
		printf("%d ",*p);
		printf("%d ",p++);
		printf("%d ",*p);
	
	return 0;
}	