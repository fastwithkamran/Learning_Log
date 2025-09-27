#include<stdio.h>
int main()
{
	float weight, height, BMI;
	
	printf("Enter your weight (in kg): ");
	scanf("%f",&weight);
	
	printf("Enter your height (in m): ");
	scanf("%f",&height);
	
	BMI= weight/(height*height);
	
	printf("Your BMI = %.2f\n",BMI);
	
	if(BMI<18.5)
	{
		printf("Underweight");
	}
	else if(18.5<=BMI && BMI<25)
	{
		printf("Normal weight");
	}
	else if(25<=BMI && BMI<30)
	{
		printf("Over weight");
    }	
	else
	{
		printf("Obesity");
	}
	
	return 0;
}