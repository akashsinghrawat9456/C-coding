#include<stdio.h>
int main(){
	int a,n,r,s;
	printf("enter no:");
	scanf("%d",&n);
	a=n;
	while(n)
     {r=n%10;
     s+=r*r*r;
     n=n/10;
	 }
	 if(a==s)
	 {printf("arm");
	 }
	 else
	 {printf("not");
	 
	 }return 0;
	 }
