//TASK 06: Simple Currency Exchange Booth

#include<stdio.h>
int main()
{
	float USD, EUR, charges, amount;
	
	printf("Enter the amount of USD you want to exhange: ");
	scanf("%f",&USD);

	EUR= USD*0.93;
	charges= 5*0.93;
	amount= EUR-charges;
	printf("\nYou will receive %.2f EUR",amount);

    return 0;
}