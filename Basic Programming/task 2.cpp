#include<stdio.h>
int main()
{
	int radius=0, area = 0, diameter = 0;
	float circumference = 0;
	printf("Enter radius:"); scanf("%d",&radius);
	diameter = 2*radius;
	printf("\nDiameter = %d units\n",diameter);
	circumference = 2 * 3.14 * radius;
	printf("Circumference = %f units\n",circumference);
	area = 3.14 * radius * radius;
	printf("Area = %d sq.units",area);
}
