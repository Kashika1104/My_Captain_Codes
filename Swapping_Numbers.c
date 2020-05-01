#include<stdio.h>
main()
	{
		int x=40 ,y=50;
		printf("Before swap : x=%d & y=%d \n",x,y);
		x=x+y;
		y=x-y;
		x=x-y;
		printf("After swap : x=%d & y=%d",x,y);
	}
