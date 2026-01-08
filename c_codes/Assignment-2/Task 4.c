#include<stdio.h>
const int maxSize=5;
void push(int stack[], int *top, int maxSize);
void pop(int stack[], int *top);
void peek(int stack[], int top);
void display(int stack[], int top);

int main()
{
int stack[maxSize];
int option;
int top=-1;


while(1)
{

printf("\nEnter 1) Push 2) Pop 3) Peek 4) Display 5) Exit: ");
scanf("%d",&option);
switch(option)
{
case 1:	
push(stack,&top,maxSize);
break;

case 2:
pop(stack,&top);
break;

case 3:
peek(stack,top);
break;

case 4:
display(stack,top);
break;

case 5:	
return 0;
break;	
}
  
}
return 0;
}
void push(int stack[], int *top, int maxSize)
{
	 int value;
     if(*top==maxSize-1)
     {
     	printf("Stack is Over flow\n");
	 }
	 else 
	 {
	 	(*top)++;
	 	printf("Enter the value to push: \n");
	 	scanf("%d",&value);
	 	stack[*top]=value;
	 }
}
void pop(int stack[], int *top)
{
	if(*top==-1)
	{
		printf("Stack is empty\n");
	}
	else
	{
		printf("Value has been removed = %d\n",stack[*top]);
		*top=(*top)-1;
	}
}
void peek(int stack[], int top)
{
		if(top==-1)
	{
		printf("Stack is empty\n");
	}
	else
	printf("The top element of the stack is %d\n",stack[top]);
}
void display(int stack[], int top)
{
	int i;
	if(top==-1)
	printf("Stack is empty");
	
	printf("The elements in the stack is: ");
	for(i=0;i<=top;i++)
	{
		printf("%d ",stack[i]);
	}
}