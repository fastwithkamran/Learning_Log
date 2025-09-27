#include<stdio.h>
int main()
{
	int age;
	
	printf("Enter your age: ");
	scanf("%d",&age);
	
	if(age>=60)
	{
		printf("Ticket Price = $8");
	}
	else if(age>=13)
	{
		printf("Ticket Price = $10");
	}
	else
	{
		printf("Ticket Price = $7");
	}
	return 0;
	
}