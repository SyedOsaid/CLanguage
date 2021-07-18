#include<stdio.h>
int main()
{
	int age=0;
	printf("Enter your age:"); scanf("%d",&age);
	if(age != 20)
	{
		printf("Age is not equals to 20");
	}
	else
	{
		printf("less than, greater than or equal.");
	}
}
