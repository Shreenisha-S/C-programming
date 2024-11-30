#include<stdio.h>
int main()
{
	FILE *file;

	file = fopen("output.txt","r");
	if(file == NULL){
		printf("file does not exist\n");
	}else{
		printf("file exist\n");
		fclose(file);
	}
	return 0;
}