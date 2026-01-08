/* Write a program that reads 10 integers into an array.
Finds and prints the difference (max - min) between the largest and smallest elements. */

#include<stdio.h>
int main()
{
	int array[10];
	int number[10];
	float difference;
	int max=0;
	int min=0;
	int i;
	
	for(i=0;i<10;i++)
	{
		printf("Enter a number %d: ",i);
		scanf("%d",&number[i]);
		
		if(number[i]>max)
		max=number[i];
		else if(number[i]<min)
		min=number[i];
	
	}
	difference= max-min;
	printf("%f",difference);
}
