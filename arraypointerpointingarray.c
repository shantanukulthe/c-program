///// pointer array pointing normal array;


#include<stdio.h>
int main()
{
	int arr[]={10,20,30,40,50};
	int *brr[5];
	
	brr[0]=arr;
	brr[1]=arr+1;
	brr[2]=arr+2;
	brr[3]=arr+3;
	brr[4]=arr+4;
	
	printf("%d  \n",arr);
	printf("%d  \n",brr);
	printf("%d  \n",brr[2]);
	printf("%d  \n",*(brr[2]));
	printf("%d  \n",*(brr+2));
	printf("%d  \n",*(*(brr+2)));
	
	
		
	return 0;
	
}