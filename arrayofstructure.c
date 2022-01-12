//////ARRAY OF  structure


#include<stdio.h>
int main()
{
		struct demo
		{
			int i;
			int j;
			int d;
		};
			struct demo arr[5];
			
			arr[0].i=11;
			arr[0].j=21;
			printf("%d",arr[0].i);
			printf("%d",arr[0].j);
			return 0;
			
}