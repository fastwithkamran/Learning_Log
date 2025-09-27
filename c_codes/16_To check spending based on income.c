//5. Monthly Budget Planner

#include<stdio.h>
int main()
{
	float income,amount, percent;
	char category[100];
	
	printf("Enter your monthly income: ");
	scanf("%f",&income);
	
	printf("Enter a category from household expenses: ");
	scanf("%s",&category);
	
	printf("Enter the amount that you spend on %s: ",category);
	scanf("%f",&amount);
	
	percent= (amount/income)*100;
	
	printf("\nYour %s spending is %.2f%% of your income",category, percent);

return 0;
}
