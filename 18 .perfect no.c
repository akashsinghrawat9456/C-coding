#include<stdio.h>
int main(){
	int n,i,s=0;
	printf("enter any no:");
	scanf("%d",&n);
	 for(i;i<n;i++)
	 {
	 if(n%i==0)
	 { 
	     s+=i;
	 }
	} if(s==n)
	 {
	 printf("\n perfect no %d",s);
	 }
	 else	 {
	 printf("\n not perfect no %d",s);
	 } return 0;
}
