/* 1)Write a C program that takes 5 integers in an array and shifts all elements one position to the right, and moves the
last element to the first position.
Example:
Input ? 1 2 3 4 5
Output ? 5 1 2 3 4 */

#include<stdio.h>
int main()
{
	int x[5] = {1,2,3,4,5};
	int y[5];
	int i,j=4;
	
	y[0]=x[j];
    j=0;

	for(i=1;i<=4;i++)
	{
        y[i]=x[j];
        j=j+1;
	}
	
	for(i=0;i<5;i++)
	{
		printf("%d",y[i]);
	}
	return 0;
}

