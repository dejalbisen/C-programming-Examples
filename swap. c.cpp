#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c;
	printf("enter value of a:");
	scanf("%d",&a);
	printf("enter value of b:");
	scanf("%d",&b);
	c=a;
	a=b;
	b=c;
	printf("after swapping a=: %d b=: %d",a,b);
	getch();
	}
