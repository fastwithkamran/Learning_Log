#include<stdio.h>
int main()
{
	float weight,cost;
	char zone;
	
	printf("Enter your package weight: ");
	scanf("%f",&weight);
	printf("Enter your delivery zone (L-Local,I-International): ");
	scanf(" %c",&zone);
	
	switch(zone)
	{
		case 'L':
			weight = weight-1;
			cost = 5+(2*weight);
			printf("Your cost is= %.2f",cost);
			break;
			
	    case 'I':
	    	weight = weight-1;
	    	cost = 15+(8*weight);
	    	printf("Your cost is= %.2f",cost);
	    	break;
	    	
	    default:
	    	printf("Invalid zone");
	}
	
	return 0;
}
	