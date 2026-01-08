#include<stdio.h>
int main(){
	
	int num=457,turn=0,guess;
	
	
	while(turn!=10){
		printf("Turn Left %d \n",10-turn);
		printf("Guess that number: ");
		scanf("%d",&guess);
		
		if(guess<num)
		printf("Go High\n");
		else if(guess>num)
		printf("Go low\n");
		else
		{
		printf("Congrats! You guess that number %d",guess);
		return 0;
	}
	turn++;
	}
	printf("Sorry you cant guess");
	return 0;
}