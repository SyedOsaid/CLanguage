#include<stdio.h>


/// 1 2 3 5 8 13
int main()
{
	int a = 1, b = 2;
	int n;
	int c = 0;
	printf("Enter Number to generate fabonacci series:\n"); scanf("%d",&n);
	printf("%d,%d",a,b);
	for(int i=0;i<n;i++)
	{
	 	c = a + b;
		printf(",%d",c);
		a = b;
		b = c;
	}
	
	return 0;
}
