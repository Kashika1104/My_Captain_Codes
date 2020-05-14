//L.C.M. of Two Numbers
#include<stdio.h>
int lcm2=0;
int lcm1(int x,int y)
	{
		lcm2=lcm2+y;
		if((lcm2%x==0)&&(lcm2%y==0))
			return lcm2;
		else
			return lcm1(x,y);	
	}
int main()
	{
		int a,b,lcm=0;
		printf("Input first number: ");
		scanf("%d",&a);
     	printf("Input second number: ");
		scanf("%d",&b);
		if(a>b)
			lcm=lcm1(b,a);
		else
			lcm=lcm1(a,b);
		printf("L.C.M. of %d and %d = %d",a,b,lcm);
		return 0;	
	}
