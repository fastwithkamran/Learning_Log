#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char** insertline(int* index,char** text);//index is the line number that has not been filled and text is the 2d pointers array to store characters on inputted line and the function returns that 2d array  
char** deleteline(int* index,char** text); 
void printAlllines(int index,char** text);
void freeAll(char** text,int index);
void savefile(char** text,int index);
char** loadfile(int* index,char** text);

int main(){
	char** text;//declare 2d array to store line
	int index=0,option;
	text=(char**) malloc((index+1)*sizeof(char*));//assign 1 memory to the row of 2d array variable text 
	if(text==NULL){//to check allocation doesnot fail
    printf("Memory not allocated");
	exit(1);
	}		
	
	while(1){
	printf("Enter 1-Insert line 2-Delete line 3-Display lines 4-Delete all lines 5-Save in file 6-Load from file 7-Exit\nOption ");
	scanf("%d",&option);
    switch(option){
    	case 1:{
    	text=insertline(&index,text);//to modify the index in the function that why & is used
    		break;
    	}
    		case 2:
    		text=deleteline(&index,text);
    			break;
    			case 3:
    				printAlllines(index,text);
    				break;
    				case 4:{
						freeAll(text,index);
						index=0;//since after free the memory and to start again i initialize index agaim
						text=(char**) malloc((index+1)*sizeof(char*));
	                    if(text==NULL){
		                printf("Memory not allocate");
		                exit(1);//this will terminate the program as ask in the assignment
	                }		
    					break;
					}
					case 5:
    						savefile(text,index);
    						break;
    						case 6:
    						text=loadfile(&index,text);
    							break;
    							case 7:
    								return 0;
    								break;
		}
	}
}
char** insertline(int* index,char** text){
	
	int length=0,ch,row,i,size=50;//length to count the numbers of characters,ch to take character,row is user input to ask which line they want to enter,size is the capaccity of a temp variable that store characters before copying into the text array 
	printf("Enter the row ");
	scanf("%d",&row);
	if(row<0 || row>*index){
		printf("Wrong row number\n");
		return text;
	}
	char *temp=(char*) malloc(size*sizeof(char));//allocating memory for temp
	if(temp==NULL){
		printf("Memory not allocated");
		exit(1);
	}
	printf("Enter the line ");
	getchar();
	while((ch=getchar())!='\n'&&ch!=EOF){//taking input character by character untill it equivalent to \n or EOF which is -1
		temp[length]=ch;//store that character
		length++;
		if(length==size){
			size*=2;
			temp=(char*) realloc(temp,size*sizeof(char));//reallocating DMA to temp
			if(temp==NULL){
				printf("Memory not allocated");
				exit(1);
			}
		}
	}
	temp[length]='\0';
	text=(char**) realloc(text,(*index+1)*sizeof(char));//reallocating dynamic memory to text
	if(text==NULL){
		printf("Memory not reallocated");
		exit(1);
	}
	for(i=*index;i>row;i--)
	{
		text[i]=text[i-1];//shifting pointers if user want to add line in middle
    }
       text[row]=(char*) malloc((strlen(temp)+1)*sizeof(char));	
		if(text[row]==NULL){
			printf("Memory not allocated");
			exit(1);
		}
    strcpy(text[row],temp);
    free(temp);//free the DMA for temp so it can be used again
	(*index)++;
return text;//thus this functon will take minimum and exact amount of required memory		
}
char** deleteline(int* index,char** text){
	int row,i;
	printf("Enter the line number to delete ");
	scanf("%d",&row);
	
	if(row<0 || row>=(*index)){
	printf("Wrong row number");
	return text;
}
	free(text[row]);//to free memory occupied by characters in that row 
	for(i=row;i<(*index)-1;i++){
		text[i]=text[i+1];//to solve there is no empty row left in middle
	}
	(*index)--;
	text=(char**) realloc(text,(*index)*sizeof(char*));
	if(text==NULL){
			printf("Memory not reallocated");
			exit(1);
		}
	return text;
}
void printAlllines(int index, char** text){
	int i; 
	for(i=0;i<index;i++){ 
	printf("\n%s",text[i]);
	 }
	return;
 }    

void freeAll(char** text, int index){
	int i;
	for(i=0;i<index;i++){
		free(text[i]);//to free the memory of all characters stored inside each row
	}
	free(text);//to free the rows memory
	return;	
}

void savefile(char** text,int index){
	
	int i;
	FILE *file=fopen("editor","w");//w is used because in this function text have to written in a file
	if(file==NULL){
		printf("Error file not open");
        return;	
	}
	for(i=0;i<index;i++){
	fprintf(file,"%s\n",text[i]);//this fprintf will print all lines in file
}
	fclose(file);
	return;
}
char** loadfile(int* index,char** text){

    int len;
    char temp[1000];//temporary variable to store characters
	FILE *file=fopen("editor","r");
	if(file==NULL){
		printf("Error file not opened");
		exit(1);	
	}
	while(fgets(temp,sizeof(temp),file)){
			text=(char**) realloc(text,(*index+1)*sizeof(char*));
			if(text==NULL){
				printf("Memory not allocated");
				fclose(file);
				exit(1);
			}	
			
		temp[strcspn(temp,"\n")]=0;
	    if(strlen(temp)==0)
	    continue;
	    
		len=strlen(temp)+1;
		text[*index]=(char*) malloc(len*sizeof(char));
			if(text[(*index)]==NULL){
				printf("Memory not allocated");
				fclose(file);
				exit(1);
			}
		strcpy(text[(*index)],temp);
		(*index)++;		                  
}
fclose(file);
return text;
}