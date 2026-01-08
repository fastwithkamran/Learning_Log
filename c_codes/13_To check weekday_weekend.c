#include<stdio.h>
int main()
{
	int num;
	
	printf("Enter a day number: ");
	scanf("%d",&num);
	
	switch(num)
	{
		case 1:
		case 2:
	    case 3:
	    case 4:
	    case 5:
	
			printf("Weekday");
			break;
			
		case 6:
		case 7:
			printf("Weekend");
			break;
		default:
			printf("Invalid Number");
	}
	
	return 0;
}