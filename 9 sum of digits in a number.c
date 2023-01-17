#include<stdio.h>
int main(){
	int s,n,r;
	printf("enter no");
	scanf("%d",&n);
	while(n)
	{	
	r=n%10;
	s+=r;
	n/=10;}
printf("%d sum of digits:",s);
	return 0;
	
}
