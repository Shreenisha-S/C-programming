#include<stdio.h>
int main()
{
	int arr[5],i,even=0,odd=0;
	printf("enter the numbers:\n");
	for(i=0;i<5;i++){
		scanf("%d",&arr[i]);
		if(arr[i]%2==0){
		even++;
	}else{
		odd++;
	}
}
		printf("even numbers:%d\n",even);
		printf("odd numbers:%d\n",odd);
		return 0;

}