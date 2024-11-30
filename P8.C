#include<stdio.h>
int main()
{
	int i,n,rev=0;
	clrscr();
	printf("enter a number:\n");
	scanf("%d",&n);
	for(; n!=0;n/=10)
	{
	rev= rev*10 + n%10;
	}
	printf("reversed number=%d\n",rev);

	return 0;
}