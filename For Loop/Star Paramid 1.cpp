#include<stdio.h>
int main()
{
	int i=0;
	int k=0;
	int j=0;
	printf("Enter the number of rows: "); scanf("%d",&j);\
	printf("\n");
	for(i=0;i<j;i++)
	{
		for(k=0;k<=i;k++)
		{
			printf("*");
		}
		printf("\n");
	}
}
