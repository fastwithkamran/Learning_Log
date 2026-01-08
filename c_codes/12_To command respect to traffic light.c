#include<stdio.h>
int main()
{
	char var;
	
	printf("Enter R, Y or G: ");
	scanf("%c",&var);

   switch(var)
   {
   	case 'R':
   		printf("Stop Sir");
   		break;
   		
   		case 'Y':
   			printf("Get Ready");
   			break;
   			
   			case 'G':
   				printf("Go");
   				break;
   					default:
   						printf("Invalid");
   }
	return 0;
	
}