/* 2)Write a program that reads the 10 numbers from user and store these numbers into an array of same size. You
program should provide a searching mechanism in such a way that how many times a particular number occurred
and then print it on screen. If number is not in array, then program should display a message “number not found”. */

#include<stdio.h>
int main()
{
	int num[10];
	int search;
	int i=1;
	int a=0;
	
	for(i=0;i<10;i++)
{
   printf("Enter a number %d: ",i);
scanf("%d",&num[i]);
	
}
    printf("Search a number ");
	scanf("%d",&search);
	
	for(i=0;i<10;i++)
	{
		if(num[i]==search)
	{
			a++;
	  
}
}

if(a>0)
	printf("\nnumber=%d occurances=%d",search,a);
	
	else 
	printf("number not found");	
		
return 0;
}
