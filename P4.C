#include<stdio.h>
int main()
{
   char ch;
   printf("enter a letter:\n");
   scanf("%c",&ch);
   if(ch=='A' || ch=='E'|| ch=='I' || ch=='O' || ch=='U' || ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' )
   {
   printf("%c is vowel\n");
   }else{
   printf("%c is consonant\n");
   }
   return 0;
   }