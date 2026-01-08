#include<stdio.h>
#include<string.h>
void encodeMessage(char message[]);
void decodeMessage(char message[]);
int main()
{
	char message[1000];
	int option;
	while(1)
	{	
	printf("Enter the option \n1)Encode Message \n2)Decode Message \n3)Exit \nOption: ");
	scanf("%d",&option);
	switch(option)
	{
		case 1:
			printf("Enter a message: ");
			getchar();
	        fgets(message,1000,stdin);
			encodeMessage(message);
			printf("\n%s\n",message);
			break;
			
			case 2:
				decodeMessage(message);
				printf("\n%s\n",message);
				break;
				
				case 3:
					return 0;
					break;
	}
}
}
	void encodeMessage(char message[])
	{
		int i,j;
		char reversed;
		int length = strlen(message);
	
        for(i=0,j=length-2;i<j;i++,j--)
        {
        	reversed=message[i];
        	message[i]=message[j];
        	message[j]=reversed;
		}
			
		for(i=0;i<length-1;i++)
		{	
		message[i]^=(1<<1);
		message[i]^=(1<<4);
     	}
	}
	void decodeMessage(char message[])
	{
		int i,j;
		char reversed;
		int length = strlen(message);
		
		for(i=0;i<length-1;i++)
		{	
		message[i] ^= (1<<1);
		message[i] ^= (1<<4);
     	}
     	for(i=0,j=length-2;i<j;i++,j--)
        {
        	reversed=message[i];
        	message[i]=message[j];
        	message[j]=reversed;
		}
	}