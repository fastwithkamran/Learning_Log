/* Sir. Talha Shahid ask you to write you a program which can help him in storing your quiz marks for pass students
within range [5-10] will be stored, consider there are 10 students registered in Section BDS-1A. He wants an another
array of same size where marks for failed students within range [0-5] are stored. Write a program for the given
scenario. You program should exit if user enters -1 and will display the marks entered along with average of each
array. */


#include<stdio.h>
int main()
{
	int i;
	float mark[10];
	float pass[10]; 
	float fail[10];
	float add=0; float sum=0;
	float pass_avg,fail_avg;
	int a=0; int b=0;
	
	for(i=0;i<10;i++)
	{
		printf("Enter marks %d: ",i+1);
		scanf("%f",&mark[i]);
		
		if(mark[i]==-1)
		break;
		
		else if(mark[i]>=5 && mark[i]<=10)
		{
		pass[a]=mark[i];
		sum= sum+mark[i];
		a++;
	}
	
		else if(mark[i]>=0 && mark[i]<5)
		{
		fail[b]=mark[i];
		add= add+mark[i];
		b++;
	}
}
	for(i=0;i<a;i++)
	{
		printf("\nPass marks=%.1f",pass[i]);
	}
	
	for(i=0;i<b;i++)
	{
		printf("\nFail marks=%.1f",fail[i]);
	}
	if(a>0)
	pass_avg= sum/a;
	
	 if(b>0)
	fail_avg= add/b;
	
	printf("\nPassing average %.1f",pass_avg);
	printf("\nFailing average %.1f",fail_avg);
	return 0;
	}
	
