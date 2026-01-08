#include<stdio.h>
int main()
{
    int num;
    int a=0;
  printf("Enter a number ");
  scanf("%d",&num);
  while(1)
  { if(num>1){
      if(num%2==0)
      {num= num/2;
      a++;
      if(num==1)
      break;}
      else{
      num= (num*3)+1;
      a++;
      if(num==1)
      break;}
      
}  }
printf("Steps=%d",a);
    return 0;