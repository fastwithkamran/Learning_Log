#include<stdio.h>
float calculateRepayment(float loan,float interestRate,int years,float installment);
int main(){
    float loan,interestRate,repayment,installment;
    int years;
    printf("Enter the loan ");
    scanf("%f",&loan);
    printf("Enter interest rate ");
    scanf("%f",&interestRate);
    printf("Enter the years ");
    scanf("%d",&years);
    printf("Enter fixed installment ");
    scanf("%f",&installment);
    
    repayment=calculateRepayment(loan,interestRate,years,installment);
    printf("\nTotal loan to pay=%f",repayment);
    return 0;
}
float calculateRepayment(float loan,float interestRate,int years,float installment){
    
    float extrapayment;
	char ans;

    printf("Year %d: Remaining loan= %.2f",years,loan);
    if(loan<=0 || years==0)//base case if loan becomes 0 or remaining years become 0 
    return loan;
    
    loan-=installment;//to subtract installment from loan
    
    printf("\nDo you want to return more with installment? yes 'Y' or no 'N': ");
    scanf(" %c",&ans);//to ask for extra payment inaddition with installment
    if(ans=='Y'){ 
    	printf("How much money? ");
    	scanf("%f",&extrapayment);
		loan-=extrapayment;   	
	}
	loan+=loan*(interestRate/100);//loan will be increased by interest rate 
    return calculateRepayment(loan,interestRate,years-1,installment); //using recursive function to calculate loan until the base condition comes true 
} 
/*to explain about for a loan of 100000 at 5% interest over 3 years
let installment=20000;
first the function will check it loan is 0 or years 0 which will fail as loan is 100000 and year is 3
loan will be subtract from installment loan=100000-20000=80000
it will add the interest rate per year loan+=80000*5%=84000

second recursion the funciton will check base condition which will fail as loan is 84000 and year is 2
then subtract loan loan=84000-20000=64000
it will add the interest rate per year loan+=64000*5%=67200

third recursion the function will check base condition year as loan is 67200 and year is 1
the subtract loan loan=67200-20000=47200
it will add the interest rate per year loan+=47200*5%=49560

fourth recursion base condition will true as years become 0
it will return the loan which is 49560

To describe why recursion is useful for incrementing tasks
because recursion pass the current amount of the loan,when the function calls it remember the last amount of loan,it saves memory by saving the use of extra counters*/ 
 

	