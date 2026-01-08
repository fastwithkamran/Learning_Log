#include<stdio.h>
int main()
{
	float amount;
	
	printf("Enter total bill amount: ");
	scanf("%f",&amount);
	
	if(amount<100)
	{
		printf("No discount\nAmount = %.2f",amount);
	}
	else if(amount>=100 && amount<=500)
	{
		printf("10%% discount is apply\nAmount = %.2f",amount-amount*0.1);
	}
	else
	{
		printf("20%% discount is apply\nAmount = %.2f",amount-amount*0.2);
	}
	
	return 0;
}
