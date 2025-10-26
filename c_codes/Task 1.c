#include<stdio.h>
//Global Variables
   int isbns[100];
   char titles[100][50];
   float prices[100];
   int quantities[100];
   int option,copies;
   int i,j,k;
   int number=0;
   int found;
   int a=0;
   int sale;
   //Declaration of Functions
   void Add_Book();
   void Process_Sale();
   void Low_Stock();
int main()
{
   printf("Welcome to Liberty Books");
   while(1)
   {
   	
   	printf("\n\n1_Add 2_Process 3_Generate low stock report 4_End\nOption: ");
   	scanf("%d",&option);
   	
   	switch(option)
   	{
   		case 1:
   		{
   		Add_Book();
   		}
   		break;
   
   		case 2:
   		{
   		Process_Sale();
		}
		break;

   		case 3:
   		{
   		Low_Stock();
		}
		break;

   		case 4: 	
   			return 0;
   			break;
   	}
   }
}

void Add_Book()
{
            i=number;  	
   			printf("Add isbn of the book:\n");
   			scanf("%d",&isbns[i]);
   	
   			for(j=0;j<number;j++)
   			{
   				
   					if(isbns[i]==isbns[j])
   					{
   						printf("You entered duplicate book\n");
   						a=1;
   						break;
					}
			
			}
			if(a==1)
				a=0;
			else if(a==0)
			{
				printf("Add title of the book:\n");
   	    		scanf(" %[^\n]", titles[i]); 
   	    		printf("Add price of the book:\n");
   	    		scanf("%f",&prices[i]);
				printf("Add quantity of the book:\n");
   	    		scanf("%d",&quantities[i]);    
   	    		number+=1;
     		}
     		
   		}
   	void Process_Sale()
   	{
   		found=0;
   		printf("Enter the isbn of the book:\n");
   			scanf("%d",&sale);
	
   			for(i=0;i<number;i++)
   			{
   				if(sale==isbns[i])
   				{
   					found=1;
					printf("Enter the number of copies sold:\n");
					scanf("%d",&copies);
					if(quantities[i]>=copies)
					{
						quantities[i] = quantities[i]-copies;
    					printf("Quantities left %d\n",quantities[i]);
    					break;
					}
					else
					{
						printf("Out of stock\n");
						break;
					}
				}
			}
				if(found==0)
				{   
					printf("Book is not available\n");
				}
			}
	   
	   void Low_Stock()
	   {
	   	for(i=0;i<number;i++)
   			{
				if(quantities[i]<5)
				{
				printf("Low stock: %s (ISBN %d) — only %d left\n", titles[i], isbns[i], quantities[i]);

				}
			}
	   }
   	
