//Check Prime
#include<stdio.h>
int Prime1(int n, int i)
{
    if(i == 1)
        return 1;  
	else
    if(n%i == 0)
        return 0;
    else
        Prime1(n, i-1);    	    
}

int main()
{
    int a, prime;
    printf("Enter a number: ");
    scanf("%d", &a);
    if(a==1)
		printf("\n\n%d is a unique number\n\n", a);
    prime = Prime1(a, a/2);
    if(prime == 1)
        printf("\n\n%d is a prime number\n\n", a);
    else
        printf("\n\n%d is not a prime number\n\n", a);    
    return 0;
}


