#include<stdio.h>
int main()
{
	int x,y;
	
	printf("Enter the value of x: ");
	scanf("%d",&x);
	
	printf("Enter the value of y: ");
	scanf("%d",&y);
	
	if(x>0 && y>0)
	{
		printf("The point (%d,%d) lies in quadrant 1",x,y);
	}
	else if (x<0 && y>0)
	{
		printf("The point (%d,%d) lies in quadrant 2",x,y);
	}
	else if(x<0 && y<0)
	{
		printf("The point (%d,%d) lies in quadrant 3",x,y);
	}
    else
	{
		printf("The point (%d,%d) lies in quadrant 4",x,y);
	}

	return 0;
}