// Program to convert temperature in celsius to fahrenheit

#include<stdio.h>
main(){
	float c;
	printf("Enter temperature in celsius : ");
	scanf("%f",&c);
	float x=1.8;
	float f=(x*c)+32;
	printf("The temperature in Fahrenheit is : ");
	printf("%0.2f",f);
}
