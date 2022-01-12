/////embended structure in c


#include<stdio.h>
int main()
{
		struct demo
		{
			int i;
			float j;
			double d;
			struct hello
			{
				int k;
				float g;
				int f;
			};
			struct hello hobj;
		};

	struct demo dobj;
	
	printf("%d \n",sizeof(dobj));  
	
	dobj.g=3.14f;
	dobj.k=11;
	dobj.f=3.014;
	dobj.i=11;
	
	printf("%d \n",sizeof(dobj));
	printf("%f \n",dobj.g);
	
	
	return 0;
	
}