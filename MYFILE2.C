#include<stdio.h>
int main()
{
	FILE *file;
	int lines=0;
	char data[500];
	char ch;
	clrscr();

	file = fopen("C:\\TurboC3\\BIN\\LINES.txt","rt");
	if(file == NULL)
	{
		printf("error opening the file,\n");
		return 1;
		}
		while((ch = fgetc(file)) != EOF)
		{
			putchar(ch);
			if(ch == '\n'){
			lines++;
			printf("newline found current count:%d\n",lines);
			}
		}

		fclose(file);
		printf("total Number of lines:%d\n:",lines + 1);
		return 0;
		}
