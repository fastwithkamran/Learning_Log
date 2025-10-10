#include<stdio.h>
int main()
{
	float speed;
	
	printf("Enter your internet download speed (Mbps): ");
	scanf("%f",&speed);
	
	if(speed<10)
	{
		printf("Basic tier");
	}
	else if(speed>50)
	{
		printf("Premium tier");
	}
	else
	{
		printf("Standard tier");
	}
	
	return 0;
}