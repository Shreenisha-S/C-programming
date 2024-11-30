#include<stdio.h>
void swap(int *cr1, int *cr2){
	int temp = *cr1;
	    *cr1 = *cr2;
	    *cr2 = temp;
	}
void main(){
	int x=10;
	int y=20;
	swap(&x,&y);
	printf("after swap:x = %d,y= %d\n",x,y);
}