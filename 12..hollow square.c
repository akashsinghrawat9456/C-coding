#include<stdio.h>
int main(){
	int n,i,j;
	printf("enter no:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	for(j=1;j<=n;j++)
	{if(j==1||j==n||i==1||i==n)
	printf("*");
	else
	printf(" ");}
	printf("\n");
	}
      return 0;
   }
