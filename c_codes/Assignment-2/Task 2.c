#include<stdio.h>
void customerinfo(char name[],int *CNIC);
void products(int *quantity1,int *quantity2,int *quantity3,int *quantity4);
int main()
{
	int option,quantity[100],i=0,j,productcode[100];
	int quantity1=50,quantity2=20,quantity3=10,quantity4=8;
	int price[4]={100,200,300,150};
	char name[100];
	int CNIC;
	int itemprice=0;
	float totalbill=0,discountbill=0;
	char promocode;
	customerinfo(name,&CNIC);
    products(&quantity1,&quantity2,&quantity3,&quantity4);         
	while(1)
	{
    printf("\n\nEnter 1_To Add item to cart 2_Check Out \nOption: ");
	scanf("%d",&option);
	switch(option)
	{
		case 1:
		{  
    printf("Enter the product code: ");
    scanf("%d",&productcode[i]);
    if(productcode[i]==001)
    {
    printf("Enter the quantity: ");
    scanf("%d",&quantity[i]);
    if(quantity[i]<=quantity1)
    {
    quantity1-=quantity[i];
 products(&quantity1,&quantity2,&quantity3,&quantity4);
 i++;
}
else
    printf("No stock\n");
}
  else if(productcode[i]==002)
    {
    printf("Enter the quantity: ");
    scanf("%d",&quantity[i]);
    if(quantity[i]<=quantity2)
    {
    quantity2-=quantity[i];
 products(&quantity1,&quantity2,&quantity3,&quantity4);
 i++;
}
else
    printf("No stock\n");

} 
else if(productcode[i]==003)
    {
    printf("Enter the quantity: ");
    scanf("%d",&quantity[i]);
    if(quantity[i]<=quantity3)
    {
    quantity3-=quantity[i];
 products(&quantity1,&quantity2,&quantity3,&quantity4);
 i++;
}
else
    printf("No stock\n");

}
else if(productcode[i]==004)
    {
    printf("Enter the quantity: ");
    scanf("%d",&quantity[i]);
    if(quantity[i]<=quantity4)
    {
    quantity4-=quantity[i];
 products(&quantity1,&quantity2,&quantity3,&quantity4);
 i++;
}
else
    printf("No stock\n");
}  	 	  	 	
else
printf("wrong product code");
	
}
break;
case 2:
	printf("\nYour Purchased Items");
	for(j=0;j<i;j++)
	{   
	if(productcode[j]==001)
	{
	    itemprice= price[0]*quantity[j];
	    totalbill+=itemprice;
		printf("\nProduct=%d\tQuantity=%d\tPrice=%d",productcode[j],quantity[j],itemprice);
	}
	else if(productcode[j]==002)
	{
	    itemprice= price[1]*quantity[j];
	    totalbill+=itemprice;
		printf("\nProduct=%d\tQuantity=%d\tPrice=%d",productcode[j],quantity[j],itemprice);
	}
		else if(productcode[j]==003)
		{
	    itemprice= price[2]*quantity[j];
	    totalbill+=itemprice;
		printf("\nProduct=%d\tQuantity=%d\tPrice=%d",productcode[j],quantity[j],itemprice);
	}
		else if(productcode[j]==004)
		{
	    itemprice= price[3]*quantity[j];
	    totalbill+=itemprice;
		printf("\nProduct=%d\tQuantity=%d\tPrice=%d",productcode[j],quantity[j],itemprice);
	}
}
	printf("\nWe are offering a promocode of Eid2025! Do you have a voucher Y/N: ");
	scanf(" %c",&promocode);
	
	discountbill= totalbill*(0.75);
    
    if(promocode=='Y')
    {
    	printf("Customer Name=%sCNIC=%d",name,CNIC);
		printf("\nYour total bill is %.2f",discountbill);
	}
	else
	{
		printf("Customer Name=%sCNIC=%d",name,CNIC);
		printf("\nYour total bill is %.2f",totalbill);
	}
	return 0;
	break;
}
}
}
void customerinfo(char *name, int *CNIC)
{   
    printf("Enter the name of user: ");
	fgets(name,100,stdin);
	printf("Enter the CNIC of user: ");
	scanf("%d",CNIC);
}
void products(int *quantity1,int *quantity2,int *quantity3,int *quantity4)
{
	printf("\nProduct code\t\t\tQuantity in Stock\t\t\tPrice per product\n001\t\t\t\t\t%d\t\t\t\t\t100\n002\t\t\t\t\t%d\t\t\t\t\t200\n003\t\t\t\t\t%d\t\t\t\t\t300\n004\t\t\t\t\t%d\t\t\t\t\t150",*quantity1,*quantity2,*quantity3,*quantity4);
}

