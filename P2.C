#include<stdio.h>
int main()
{
int year;
printf("enter a year\n");
scanf("%d",&year);
if(year%4==0 && year%100!=0 || year %400==0)
{
printf("year is a leap year \n");
}
else
{
printf("year is not a leap year\n");
}
return 0;
}