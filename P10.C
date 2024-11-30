#include<stdio.h>
void main()
{
	int i,num,isprime=1;
	printf("enter a number");
	scanf("%d",&num);
	for(i=2;i<=num/2;i++)
	{
	if(num % i == 0)
	{
	isprime = 0;
	break;
	}
     }
     if(isprime && num > 1)

		printf("%d is a prime number\n",num);
		else
		printf("%d is not a prime number\n",num);
		}
