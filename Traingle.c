// Program to find the third angle in the triangle

#include<stdio.h>
main(){
	int a;
	int b;
	printf("Enter frist angle of triangle : ");
	scanf("%d",&a);
	printf("Enter second angle of : ");
	scanf("%d",&b);
	int x = a+b;
	int c = 180-x;
	printf("The third angle is : ");
	printf("%d",c);
}
