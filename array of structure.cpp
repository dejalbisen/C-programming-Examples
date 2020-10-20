#include<stdio.h>
#include<conio.h>
struct student
{
	int roll;
	char grade;
	float per;
};
int main()
{
	struct student s[3];
	int i;
	for(i=0;i<3;i++)
{
	printf("enter roll,grade,per");
	scanf("%d %c %f",&s[i].roll,&s[i].grade,&s[i].per);
}
for(i=0;i<3;i++)
{
	printf("\n %d %c %f",s[i].roll,s[i].grade,s[i].per);
}
return 0;

}
