#include<stdio.h>
int main(){
	int n,l,i,k,j;
	printf("enter the no:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{ for(k=1;k<=i;k++)
	{printf(" ");
	}for(j=n;j>=i;j--)
	{printf("*");
	}for(l=n;l>i ;l--)
	{printf("*");}printf("\n");
	}
     return 0;      
}
