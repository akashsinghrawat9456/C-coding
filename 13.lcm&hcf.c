#include<stdio.h>
void main(){
	int lcm,hcf,i,j,k;
	printf("enter no:");
	scanf("%d%d",&j,&k);
	int min=(j>k)?k:j;
	for(i=1;i<=min;i++)
	{if(j%i==0&&k%i==0)
	hcf=i;
	}
	printf("hcf is %d",hcf);
	lcm=(j*k)/hcf;
	printf("\n lcm=%d",lcm);	}
	
   
   
