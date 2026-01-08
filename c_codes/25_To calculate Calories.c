//4. Fitness Calorie Burn Estimator

#include<stdio.h>
int main()
{
	int MET;
	float weight, time, new_weight, new_time, Calories;
	MET = 8;
	printf("Enter your weight (in pounds): ");
	scanf("%f",&weight);
	printf("Enter time you ran (in minutes): ");
	scanf("%f",&time);
	
	new_weight= weight*0.45;
	new_time= time/60;
	
	Calories= MET*new_weight*new_time;
	
	printf("\n%.2f Calories were burned", Calories);
	
	return 0;
	
}