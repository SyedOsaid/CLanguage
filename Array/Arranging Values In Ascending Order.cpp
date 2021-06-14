//Set Values Into Ascending Order//
#include<stdio.h>
int main()
{
	int array[5];
	int temp; 
	for(int i=0; i<5; i++)
	{
		printf("Enter Number:"); scanf("%d",&array[i]);
	}
	for(int i=0;i<5;i++)
	{
		for(int j=1;j<5;j++)
		{
			if(array[j-1] > array[j])
			{
				temp = array[j-1];
				array[j-1] = array[j];
				array[j] = temp;
			}
		}
	}
	for(int i=0;i<5;i++)
	{
		printf("%d,",array[i]);
	}
}
