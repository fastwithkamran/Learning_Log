#include<stdio.h>
int main()
{
    int num,orgnum;
    int remainder=0, result=0;
    
    
    printf("Enter number ");
    scanf("%d",&num);
    
    orgnum=num;
    
    remainder= num%10;
    result += remainder*remainder*remainder;
    num= num/10;
    
    remainder= num%10;
    result += remainder*remainder*remainder;
    num= num/10;
    
    remainder= num%10;
    result+= remainder*remainder*remainder;
    
    if(result==orgnum)
    printf("Its an Armstrong number");
    else
    printf("Its not");
    
    return 0;
}