#include<stdio.h>
#include<conio.h>
int main()
{
	int num1,num2;
	float avg;
	printf("enter first number:");
	scanf("%d",&num1);
	printf("enter second number:");
	scanf("%d",&num2);
	avg=(float)(num1+num2)/2;
	printf("average of %d and %d is: %.2f",num1, num2,avg);
	return 0;
}
