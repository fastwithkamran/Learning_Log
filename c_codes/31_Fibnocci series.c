#include<stdio.h>
int main()
{
    int a=0;
    int i;
    int c=0;
    printf("%d",a);
    int b=1;
printf("%d",b);
for(i=1;i<=10;i++)
{

c=a+b;
printf("%d",c);
a=b;
b=c;
}

return 0;
}