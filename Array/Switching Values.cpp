#include<stdio.h>
int main()
{
	int a=0;
	int b=0;
	int c=0;
	printf("Enter the value of a = "); scanf("%d",&a);
	printf("\nEnter the value of b = "); scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("The value of a = %d",a);
    printf("\nThe value of b = %d",b);
}
