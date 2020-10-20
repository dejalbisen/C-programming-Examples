#include<stdio.h>
#include<conio.h>
void main()
{
	int arr1[5],arr2[5],arr3[5],i; 
	printf("enter 5 values in first array:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr1[i]);
	}
	printf("enter 5 values in second array:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr2[i]);
	}
	for(i=0;i<5;i++)
	{
		arr3[i]=arr1[i]+arr2[i];
	}
	printf("addition of two array:");
	for(i=0;i<5;i++)
	{
		printf("%d",arr3[i]);
	}
	getch();
}
	

