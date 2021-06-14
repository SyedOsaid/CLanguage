//How To Target An Element of an Array//
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
		if(array[i] == 30)
		{
			printf("30 has been targeted in index:%d",i);
			break;
		}
	}
	
}
