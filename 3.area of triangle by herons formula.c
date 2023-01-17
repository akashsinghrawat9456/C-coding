#include<stdio.h>
#include<math.h>
int main(){
	float s,a,c,b,area;
	printf("enter any number");
	scanf("%f%f%f",&a,&b,&c);
    s=(a+b+c)/2;
    area=(sqrt)(s*(s-a)*(s-b)*(s-c));
    printf("area of triangle %f",area);
    return 0;
}
