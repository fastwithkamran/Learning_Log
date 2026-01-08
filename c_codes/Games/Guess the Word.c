#include<stdio.h>
int main(){
	printf("Welcome to Guess The Word Challenge!!");
	char sentence[20]={'S','T','R','A','N','G','E','R'};
	char find[20];
	char ch;
	int i,wrong=0,guess=0,count=0,spot=0;
	int len=strlen(sentence);
	for(i=0;i<len;i++){
		if(i==1)
		find[i]=sentence[i];
		else if(i==4)
		find[i]=sentence[i];
		else if(i==7)
		find[i]=sentence[i];
		else if(i==9)
		find[i]=sentence[i];
		else
		find[i]='_';
	}
	find[len]='\0';
	
	for(i=0;find[i]!='\0';i++){
		if(find[i]=='_')
		spot++;
	}
	while(1){
		
	printf("\n%s",find);
	printf("\n\nGuess a LETTER: ");
	scanf(" %c",&ch);
	
	for(i=0;sentence[i]!='\0';i++){
		if(ch==sentence[i]){
			find[i]=ch;
			count++;
			guess++;
		}
	}
	if(count==spot){
		printf("Congrats you guess the word %s",sentence);
		return 0;
	}
	if(guess>0){
		guess=0;
		continue;
	}
	else{
	wrong++;
	printf("Save the person\n");
    if(wrong==1)
    printf("\t\tO\n\n");
    else if(wrong==2)
    printf("\t\tO\n\t\t|\n\n");
    else if(wrong==3)
    printf("\t\t O\n\t\t-|\n\n");
    else if(wrong==4)
    printf("\t\t O\n\t\t-|-\n\n");
    else if(wrong==5)
    printf("\t\t O\n\t\t-|-\n\t\t/\n\n");
    else if(wrong==6){
	printf("\t\t O\n\t\t-|-\n\t\t/ \\");
    printf("\nThe word was %s",sentence);
    printf("\nGame Over");
    return 0;
}		
}	
}
return 0;
}