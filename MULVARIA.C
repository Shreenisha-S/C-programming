#include<stdio.h>
void main(){
	int a =5, b = 10, *p1, *p2;
	p1= &a;
	p2= &b;
	printf("a=%d, b=%d\n",*p1,*p2);
	}