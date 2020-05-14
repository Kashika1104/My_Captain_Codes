//Sum of Digits
#include <stdio.h>
int sum1(int a)
	{
	    if(a == 0)
	        return 0;
	        
	    return ((a % 10) + sum1(a / 10));
	}
int main()
	{
	    int a, sum;
	    printf("Input number: ");
	    scanf("%d", &a);
	    sum = sum1(a);
	    printf("Sum of digits : %d",sum);
	    return 0;
	}

