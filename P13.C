#include<stdio.h>
//function with parameter

//function declaration
void addnumber(int a,int b);
int main(){
	addnumber(10,20); //function call with parameter
	return 0;
}
	//funtion definition with parameter
	void addnumber(int a,int b){
	int sum = a+b;
	printf("sum of %d and %d is : %d\n",a,b,sum);
	}
