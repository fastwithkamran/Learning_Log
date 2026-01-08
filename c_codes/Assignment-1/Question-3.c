#include<stdio.h>
int main()
{
	int age;
	char eyesight_test, written_test, driving_test, medical_fitness_certificate;
	
	printf("Enter age: ");
	scanf("%d",&age);
	
	if(age>=18)
	{
		printf("Enter eyesight exam result (P/F): ");
	    scanf(" %c",&eyesight_test);
	
	if(eyesight_test=='P')
	{
		printf("Enter written test result (P/F): ");
	    scanf(" %c",&written_test);
	
		if(written_test=='P')
	{
		printf("Enter driving test result (P/F): ");
	    scanf(" %c",&driving_test);
	    
	    if(driving_test=='P')
	    {
			
		if(age>60)
	{
		printf("Do you have medical certificate (Y/N): ");
	    scanf(" %c",&medical_fitness_certificate);
	    
	    if(medical_fitness_certificate=='Y')
	    {
	    	printf("You are eligible for license");
		}
		else
		{
		printf("You are not eligible for license");
       	}
	}
	    else
		{
		printf("You are eligible for license");
       	}
    }
        else
		{
		printf("You are not eligible for license");
       	}	
    }
	    else
		{
		printf("You need to retake the written test");
       	}
    }
	    else
		{
		printf("You might need prescription for glasses");
       	}
    }
	    else
		{
		printf("You are ineligible for license");
       	}
	
	return 0;	
}