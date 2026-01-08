#include<stdio.h>
int main()
{
	float num1, num2;
	int op;
	
	printf("Enter number 1: ");
	scanf("%f",&num1);
	printf("Enter number 2: ");
	scanf("%f",&num2);
	
	printf("Enter a operation number:\n1) Addition \n2) Subtraction \n3) Multiplication \n4) Division: ");
	scanf("%d",&op);
	
	switch(op) 
	{
		case 1:
	    printf("Addition of two numbers is %.2f",num1+num2);
	    break;
	    
	    case 2:
	    printf("Subtraction of two numbers is %.2f",num1-num2);
	    break;
	    
	    case 3:
	    printf("Multiplication of two numbers is %.2f",num1*num2);
	    break;
	    
	    case 4:
	    	if(num2!=0)
	    	{
	    printf("Division of two numbers is %.2f",num1/num2);
 	        }
	        else
	        {
	        	printf("Error: Division by zero is not allowed");
			}
	    break;
	    
	    default:
	    	printf("Invalid operation");
	}
	
	return 0;
}