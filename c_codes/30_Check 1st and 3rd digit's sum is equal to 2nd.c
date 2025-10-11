#include<stdio.h>
int main()
{
    int num;
    int only, result, remainder;
 printf("Enter a number");
 scanf("%d",&num);
 
 if(num>99 && num<1000)
 {
     remainder= num%10;
     result= remainder;
     num= num/10;
     remainder= num%10;
     only=remainder;
     num= num/10;
     remainder= num%10;
     result+= remainder;
     
     if(result==only)
     {
         printf("True");
     }
     else
     printf("False");
 
     
 }
    return 0;
}
