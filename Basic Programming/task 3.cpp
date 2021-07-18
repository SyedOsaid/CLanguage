#include<stdio.h>
int main()
{
	float celsius,fehrenheit;
	printf("Enter temprature in Fehrenheit:");
	scanf("%f",&fehrenheit);
	
	// Fehrenheit to celsius conversation formula
	celsius=(fehrenheit - 32)*5/9;
	// Print the result
	printf("\nCelsius = %.3f",celsius); //.3f means correct to 3 decimal places
}
