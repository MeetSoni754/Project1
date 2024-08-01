// Adding gross salary

#include<stdio.h>
main(){
	float HRA;
	float DA;
	float TA;
	printf("Enter the percentage of Salary to HRA : ");
	scanf("%f",&HRA);
	printf("Enter the percentage of Salary to Da : ");
	scanf("%f",&DA);
	printf("Enter the percentage of Salary to TA : ");
	scanf("%f",&TA);
	float Base;
	printf("Enter the Base Salary : ");
	scanf("%f",&Base);
	float Total = HRA+DA+TA;
	float Salary = (Total*Base)/100;
	float Gross = Salary+Base;
	printf("Gross salary is : ");
	printf("%0.2f",Gross);	
}
