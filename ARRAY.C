#include<stdio.h>
#define M 3
#define N 3

	void print(int arr[M][N]){
		int i,j;
		for(i = 0; i<M; i++){
			for(j=0;j<N;j++)
			printf("%d",arr[i][j]);
			printf("\n");
		};
	}

int main(){
	//initialisation of array
	int arr[][3] = {
	{1,2,3},
	{4,5,6},
	{7,8,9}
	};
	//function call
	print(arr);
	return 0;
};
