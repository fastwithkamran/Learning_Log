#include<stdio.h>
int main()
{
	float temp;
	
	printf("Enter current temperature in Celsius: ");
	scanf("%f",&temp);
	
	if(temp>25)
	{	
		printf("Turning on AC");	
	}
	else if(temp<18)
	{	
		printf("Turning on Heating");	
	}
	else 
	{
		printf("Climate is comfortable");
	}
	
	return 0;
}