#include<stdio.h>
int main()
{
	int arr[3][3],i,j,max;
		printf("enter elements of the matrix (3*3):\n");
		for(i=0; i<3; i++){
			for(j=0; j<3; j++){
				scanf("%d",&arr[i][j]);
		   }
	}
		   max=arr[0][0];
		for(i=0; i<3; i++){
			for(j=0; j<3; j++){
				if(arr[i][j] > max){
				max = arr[i][j];
				}
			}
	 }
	printf("maximum elements:%d\n",max);
return 0;
}



