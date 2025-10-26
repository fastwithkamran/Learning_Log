#include<stdio.h>
void user_details();
void product_list(int *quantity_1,int *quantity_2,int *quantity_3,int *quantity_4);
int main()
{
	int option,product_code[100],quantity[100],i=0,j;
	int quantity_1=50,quantity_2=20,quantity_3=10,quantity_4=8;
	int price[4]={100,200,300,150};
	int total_bill=0;
	user_details();
    product_list(&quantity_1,&quantity_2,&quantity_3,&quantity_4);         
	while(1)
	{
    printf("\n\nClick (1)To Add item to cart (2)Check Out\nOption: ");
	scanf("%d",&option);
	switch(option)
	{
		case 1:
		{  
    printf("Enter the product code: ");
    scanf("%d",&product_code[i]);
    if(product_code[i]==1)
    {
    printf("Enter the quantity: ");
    scanf("%d",&quantity[i]);
    quantity_1-=quantity[i];
 product_list(&quantity_1,&quantity_2,&quantity_3,&quantity_4);
}
  else if(product_code[i]==2)
    {
    printf("Enter the quantity: ");
    scanf("%d",&quantity[i]);
    quantity_2-=quantity[i];
 product_list(&quantity_1,&quantity_2,&quantity_3,&quantity_4);
} 
else if(product_code[i]==3)
    {
    printf("Enter the quantity: ");
    scanf("%d",&quantity[i]);
    quantity_3-=quantity[i];
 product_list(&quantity_1,&quantity_2,&quantity_3,&quantity_4);
}
else if(product_code[i]==4)
    {
    printf("Enter the quantity: ");
    scanf("%d",&quantity[i]);
    quantity_4-=quantity[i];
 product_list(&quantity_1,&quantity_2,&quantity_3,&quantity_4);
}  	 	  	 	
else
printf("You entered wrong product code");

i++;	
}
break;
case 2:
	printf("\nYour Purchased Items");
	for(j=0;j<=i;j++)
	{   
	if(product_code[j]==1)
	{
	    price[0]*=quantity[j];
	    total_bill+=price[0];
		printf("\nProduct=%d\tQuantity=%d\tPrice=%d",product_code[j],quantity[j],price[0]);
	}
	else if(product_code[j]==2)
	{
	    price[1]*=quantity[j];
	    total_bill+=price[1];
		printf("\nProduct=%d\tQuantity=%d\tPrice=%d",product_code[j],quantity[j],price[1]);
	}
		else if(product_code[j]==3)
		{
	    price[2]*=quantity[j];
	    total_bill+=price[2];
		printf("\nProduct=%d\tQuantity=%d\tPrice=%d",product_code[j],quantity[j],price[2]);
	}
		else if(product_code[j]==4)\
		{
	    price[3]*=quantity[j];
	    total_bill+=price[3];
		printf("\nProduct=%d\tQuantity=%d\tPrice=%d",product_code[j],quantity[j],price[3]);
	}
}
	printf("\nYour total bill is %d",total_bill);
	return 0;
	break;
}
}
}
void user_details()
{
	char name[100];
	int CNIC;
printf("Enter the name of user: ");
	scanf("%s",name);
	printf("Enter the CNIC of user: ");
	scanf("%d",&CNIC);
}
void product_list(int *quantity_1,int *quantity_2,int *quantity_3,int *quantity_4)
{
	printf("\nProduct code\t\t\tQuantity in Stock\t\t\tPrice per product");
	printf("\n001\t\t\t\t\t%d\t\t\t\t\t100",*quantity_1);
	printf("\n002\t\t\t\t\t%d\t\t\t\t\t200",*quantity_2);
	printf("\n003\t\t\t\t\t%d\t\t\t\t\t300",*quantity_3);
	printf("\n004\t\t\t\t\t%d\t\t\t\t\t150",*quantity_4);
}
