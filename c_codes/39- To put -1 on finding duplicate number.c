/* You are working in a data management department where you are asked to remove duplicate entries from a list of
recorded IDs. Write a program that takes 10 integers from the user and stores them in an array. The program should
replace every duplicate element (after its first occurrence) with -1 to mark it as a duplicate and then display the final
updated array on the screen.
Example: Input → 2 3 5 3 5 9 1 2 8 1 → Output → 2 3 5 -1 -1 9 1 -1 8 -1 */


#include<stdio.h>
int main()
{

	int i; int j;
	int number[10];
	
	for(i=0;i<10;i++)
	{
		printf("Enter number %d: ",i);
		scanf("%d",&number[i]);
		
	for(j=0;j<i;j++)
	{
	 if(number[j]==number[i])
	{
		number[i]=-1;
		break;
	}	
	}	

	}
	
      for(i=0;i<10;i++)
   {

	printf("%d",number[i]);		
   }
		return 0;
}