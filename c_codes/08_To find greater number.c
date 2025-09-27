#include<stdio.h>
int main()
{
	int num1, num2;
	printf("Enter first number: ");
	scanf("%d",&num1);
	printf("Enter second number: ");
	scanf("%d",&num2);
	
	if(num1>num2){
		printf("Number 1 is greater");
	}
	else{
		printf("Number 2 is greater");
	}
	
	return 0;
}

	