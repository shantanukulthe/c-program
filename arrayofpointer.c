///// array of pointer

#include<stdio.h>
int main()
{
	int *arr[4];
	
	int i=10;
	int j=20;
	int k=30;
	int y=40;1
	
	arr[0]=&i;
	arr[1]=&j;
	arr[2]=&k;
	arr[3]=&y;
	
	printf("%d  \n",arr);
	printf("%d   \n",*(arr+1));
	printf("%d   \n",*(*(arr+1)));
	printf("%d   \n",*(arr[1]));
		
	return 0;
	
}