#include<stdio.h>
int main()
{
	char light,pedestrian;
	
	printf("Enter the current traffic light (R-Red,Y-Yellow,G-Green): ");
	scanf("%c",&light);
	
	printf("Enter is the pedestrian has press crossing button (Y/N): ");
	scanf(" %c",&pedestrian);
	
	switch(light)
	{
		case 'R':
		printf("Vehicles must stop");
		switch(pedestrian)
	{
		case'Y':
			printf("\nPedestrian may cross");
			break;
	}
		break;
	      
	    case 'G': 
		printf("Vehicles may go");
        break;	
	
        case 'Y':
		printf("Vehicles should prepare to stop");
		break;
		
		default:
			printf("Invalid signal");
	}
	
	return 0;
	
}
	
	