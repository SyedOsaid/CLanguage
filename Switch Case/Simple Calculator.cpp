//Simple Calculator//
#include<stdio.h>
#include<conio.h>
int main()
{
	int number_01,number_02;
	char sign;
	
	printf("Enter first number: "); 
	scanf("%d",&number_01);
	
	printf("Enter the operator: "); 
	scanf("%c",&sign);
	
	printf("Enter second number: "); 
	scanf("%d",&number_02);
	
	switch(sign)
	{
		case'+':
			printf("%d + %d = %d", number_01 ,number_02, number_01+number_02);
			break;
		case'-':
			printf("%d - %d = %d", number_01,number_02, number_01-number_02);
			break;
		case'*':
			printf("%d * %d = %d", number_01,number_02, number_01*number_02);
			break;
		case'/':
			printf("%d / %d = %d", number_01,number_02, number_01/number_02);
			break;
		default:
			printf("Wrong operator use!");
	}
	return 0;	
}
