#include<stdio.h>
int main()
{
	int correct_pin=2436, pin;
	
	printf("Enter the pin: ");
	scanf("%d",&pin);
	
	if(pin==correct_pin)
	{
		printf("Access granted");
	}
	else{
		printf("Access denied.Incorrect pin");
	}
	
	return 0;
}
	