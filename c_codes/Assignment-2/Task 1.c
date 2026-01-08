#include<stdio.h>
void Add_Book(int isbns[],char titles[][50],int quantities[],float prices[],int *count);
void Process_Sale(int isbns[],int quantities[],int count);
void Low_Stock(int isbns[],char titles[][50],int quantities[],float prices[],int count);
int main()
{
   	int isbns[100],quantities[100],count=0,option; 
   	char titles[100][50];
   	float prices[100];
   while(1)
   {
   	printf("\n1_Add 2_Process 3_Generate low stock report 4_End\nOption: ");
   	scanf("%d",&option);
   	switch(option)
   	{
   		case 1:
   		{
   		Add_Book(isbns,titles,quantities,prices,&count);
   		}
   		break;
   		case 2:
   		{
   		Process_Sale(isbns,quantities,count);
		}
		break;
   		case 3:
   		{
   		Low_Stock(isbns,titles,quantities,prices,count);
		}
		break;
   		case 4: 	
   			return 0;
   			break;
   	}
   }
}
void Add_Book(int isbns[],char titles[][50],int quantities[],float prices[],int *count)
{         
     int i,j,a=0;
     
            i=*count;   
   			printf("Add isbn of the book: ");
   			scanf("%d",&isbns[i]);
   			for(j=0;j<i;j++)
   			{
   					if(isbns[i]==isbns[j])
   					{
   						printf("\nYou entered duplicate book");
   						a=1;
   						break;
					}
			}
			if(a==1)
				a=0;
			else if(a==0)
			{
				printf("Add title of the book: ");
				getchar();
				fgets(titles[i],50,stdin);
				printf("Add price of the book: ");
   	    		scanf("%f",&prices[i]);
				printf("Add quantity of the book: ");
   	    		scanf("%d",&quantities[i]);    
   	    		(*count)++;
     		}
   		}
   	void Process_Sale(int isbns[],int quantities[],int count)
   	{
   		int copies,isbn_sale,i,found=0;		      		
   		printf("Enter the isbn of the book: ");
   			scanf("%d",&isbn_sale);
   			for(i=0;i<count;i++)
   			{
   				if(isbn_sale==isbns[i])
   				{
   					found=1;
					printf("Enter the number of copies sold: ");
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
					printf("Book is not available\n");
			}
	   void Low_Stock(int isbns[],char titles[][50],int quantities[],float prices[],int count)
	   {
	   	int i;
	   	for(i=0;i<count;i++)
   			{
				if(quantities[i]<5)
				printf("Low stock Title: %sISBN %d Books Left %d\n", titles[i], isbns[i], quantities[i]);
			}
	   }
   	
