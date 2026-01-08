//2. Restaurant Bill Splitter and Tipper

#include<stdio.h>
int main()
{
	float bill, tip, tax, tip_amount, total, total_per_person;
	int people;
	
	printf("Enter Bill Amount: ");
	scanf("%f",&bill);
	printf("Enter Number of people: ");
	scanf("%i",&people);
	printf("Enter your desired tip percentage: ");
	scanf("%f",&tip);
    
    tax= bill*0.08;

    
    tip_amount= (tip/100)*bill;
    
    total= tax+bill+tip_amount;
    
    total_per_person= total/people;
    
    printf("\nBill amount = %.2f \nNumber of People = %i \nTip amount = %.2f \nTax = %.2f \nTotal Amount = %.2f \nTotal amount per person = %.2f",bill,people,tip_amount,tax,total,total_per_person);
	
	return 0;
	
}