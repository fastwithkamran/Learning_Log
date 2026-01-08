#include<stdio.h>

typedef struct{
	int x;
	int y;
	int access;
} Shelf;
void AddBook(Shelf *book,int capacity,int *count);
void AccessBook(Shelf *book,int capacity);

int main()
{
	int i,capacity,Q,count=1,option,number=1;
	printf("Enter the capacity ");
	scanf("%d",&capacity);
	printf("Enter the number of operations ");
	scanf("%d",&Q);
	Shelf book[capacity];
	for(i=0;i<capacity;i++){//to initialize the struts so they not display garbage values
		book[i].x=0;
		book[i].y=0;
		book[i].access=0;
	}
 
    if(Q>0){
    do{
    	printf("Select an operation 1 Add book 2 Access book ");
    	scanf("%d",&option);
    	
    	switch(option)
    	{
    		case 1:
    			AddBook(book,capacity,&count);
    			break;
    			case 2:
    				AccessBook(book,capacity);
    				break;
		}
        number++;//it will count the number of operations
	}while(Q>=number);
}
   	return 0;
}

void AddBook(Shelf* book,int capacity,int* count){
	 
	int id,popularityscore,i=0,least=book[0].access,booknumber=0;
	printf("Enter id of the book ");
	scanf("%d",&id);
	printf("Enter popularity score of the book ");
	scanf("%d",&popularityscore);
	
	for(i=0;i<capacity;i++)//to check the previous books to verify not have the same id
	{
		if(book[i].x==id){//if duplicate found then it will update the popularity score
			book[i].y=popularityscore;
			return;   
		}
    }
	
	if(*count>capacity){//check that count of books on Shelf does not exceed the capacity 
		for(i=0;i<capacity;i++){
		if(least>book[i].access){//if it exceeds then this condition find the least access book
        least=book[i].access;
		booknumber=i;
	}
}
        book[booknumber].x=id;
		book[booknumber].y=popularityscore;
}
	else{//if nothing above trues then it will add a book
	book[(*count)-1].x=id;
	book[(*count)-1].y=popularityscore;
    (*count)++;//to update the count of books on the shelf
}
}
void AccessBook(Shelf *book,int capacity){
	
	int id,i;
	printf("Enter id of the book ");
	scanf("%d",&id);
	
	for(i=0;i<capacity;i++)//loop which will run  untill i less than capacity cause i starting from 0
	{
		if(book[i].x==id){//check the stored id match the provided id
		printf("Popularity Score=%d\n",book[i].y);
        book[i].access++;//this will add +1 tp the count number of times that book has been access
		return;
		}
	}
		printf("-1\n"); 
        return;
}