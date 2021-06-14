//Set Elements Of Array Into Descending Order//
#include<stdio.h>
int main()
{
	int array[5];
	for(int i=0; i<5; i++)
    {
		printf("Enter Number:"); scanf("%d",&array[i]);
	}
	for(int i=0;i<5;i++)
	{
		for(int j=1;j<5;j++)
		{
			if(array[j-1] < array[j])
			{
				int temp = array[j-1];
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
