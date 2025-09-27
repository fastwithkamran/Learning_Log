#include<stdio.h>
int main()
{
	
	char var;
	printf("Enter a character: ");
	scanf("%c",&var);
	
	switch(var)
	{
		case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
			printf("It is a vowel");
			break;
		
		default:
			printf("It is a consonant");
	}
	
	return 0;
}