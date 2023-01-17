#include<stdio.h>
int main(){
	int n,i,a=0,b=1,c;
	printf("enter any no:");
	scanf("%d",&n);
	 for(i;i<=n;i++)
	 { 
	 printf(" %d ",a);
	 c=a+b;
	 a=b;
	 b=c;
	 }
 return 0;
}
