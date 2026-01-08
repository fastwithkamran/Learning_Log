/*You are assisting your English language teacher who wants to analyze how many vowels and consonants appear in
students’ submitted words. Write a program that reads a single word using scanf and counts the number
of vowels and consonants in it without using any string library functions like strlen(). The program should then
display both counts on the screen.*/

#include<stdio.h>
int main()
{
	char array[100];
	int i;
	int a=0;
	int b=0;
	
	printf("Enter a word: ");
	scanf("%s",&array);
	
	for(i=0;i<100;i++)
	{
	
		
	if(array[i]=='a' || array[i]=='e' || array[i]=='i' || array[i]=='o' || array[i]=='u' || array[i]=='A' || array[i]=='E' || array[i]=='I' || array[i]=='O' || array[i]=='U')
			a++;
       else if(array[i] == '\0')
       {
       	break;
	   }
		else
		b++;
	}
	
	printf("Number of vowels %d \n",a);
	printf("Number of consonants %d",b);
}
