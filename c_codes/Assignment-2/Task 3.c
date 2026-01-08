#include<stdio.h>
void update_sector_status(int grid[3][3],int *row,int *column);
void query_sector_status(int grid[3][3]);
void run_system_diagnostic(int grid[3][3]);
int main()
	{
		int grid[3][3]={0};
		int option,row,column;
		while(1)
		{
		printf("\nEnter options to \n1)Update sector status\n2)Query sector status\n3)Run System Diagnostic\n4)Exit\nOption: ");
		scanf("%d",&option);
		switch(option)
		{
			case 1:
				update_sector_status(grid,&row,&column);	
				break;
				
				case 2:
					query_sector_status(grid);
					break;
					
					case 3:
					run_system_diagnostic(grid);
					break;
					
					case 4:
						return 0;
						break;
		}
	}
	}
	void update_sector_status(int grid[3][3],int *row,int *column)
	{
		int number;
		printf("\nEnter a row: ");
		scanf("%d",row);
	    printf("Enter a column: ");
		scanf("%d",column);
	    printf("Enter a number: ");
		scanf("%d",&number);
		grid[*row][*column]=number;
	}
	void query_sector_status(int grid[3][3])
	{
		int row,column;
		printf("Enter a row: ");
		scanf("%d",&row);
	    printf("Enter a column: ");
		scanf("%d",&column);
		
		if(grid[row][column] & (1<<0))
		printf("\nThe grid %d of sector %d Power's is ON",column,row);
		else
		printf("\nThe grid %d of sector %d Power's is OFF",column,row);
		
		if(grid[row][column] & (1<<1))
		printf("\nWarning! The grid %d of sector %d is Overload",column,row);
		else
		printf("\nThe grid %d of sector %d is Normal",column,row);
		
		if(grid[row][column] & (1<<2))
		printf("\nThe grid %d of sector %d required MAINTENANCE\n",column,row);
		else
		printf("\nThe grid %d of sector %d working Fine\n",column,row);
	}
	void run_system_diagnostic(int grid[3][3])
	{
		int row,column,a=0,b=0;
		for(row=0;row<3;row++)
		{
			for(column=0;column<3;column++)
			{
				if(grid[row][column] & (1<<1))
				a++;
				
				if(grid[row][column] & (1<<2))
				b++;
			}
		}
		printf("\nThe total number of sectors that are Overloaded are= %d",a);
		printf("\nThe total number of sectors that required Maintenance are= %d\n",b);
	}
	