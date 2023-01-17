#include<stdio.h>
int main(){
	int n,i,j;
	for(i=1;i<=3;i++)
	{
	for(j=1;j<=3;j++)
	{if(j==1||j==3||i==1||i==3)
	printf("*");
	else
	printf(" ");}
	printf("\n");
	}
      return 0;
   }
