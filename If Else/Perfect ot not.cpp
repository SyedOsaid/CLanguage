#include<stdio.h>
int main()
{
	int age=0;
	printf("Enter your age:"); scanf("%d",&age);
	if(age < 20 && age > 0 && age != 10)
	{
		printf("Perfect");
	}
	else
	{
		printf("Wrong");
	}
}
