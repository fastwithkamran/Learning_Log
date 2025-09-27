#include <stdio.h>
int main() 
{
    int card1, card2, card3, card4, card5;
    int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0,j=0,k=0,l=0,m=0;

    printf("Enter your cards number:\n");
    printf("1 represents Ace,\n");
    printf("2-10 represent cards numbered 2 through 10,\n");
    printf("11 represents Jack,\n");
    printf("12 represents Queen,\n");
    printf("13 represents King:\n");
    scanf("%d",&card1);
    
	if(card1==1)
        a++;
    else if(card1==2)
        b++;
    else if(card1==3)
        c++;
    else if(card1==4)
        d++;
    else if(card1==5)
        e++;
    else if(card1==6)
        f++;
    else if(card1==7)
        g++;
    else if(card1==8)
        h++;
    else if(card1==9)
        i++;
    else if(card1==10)
        j++;
    else if(card1==11)
        k++;
    else if(card1==12)
        l++;
    else if(card1==13)
        m++;
    else
        printf("Wrong number\n");

    scanf("%d",&card2);
    if(card2==1)
        a++;
    else if(card2==2)
        b++;
    else if(card2==3)
        c++;
    else if(card2==4)
        d++;
    else if(card2==5)
        e++;
    else if(card2==6)
        f++;
    else if(card2==7)
        g++;
    else if(card2==8)
        h++;
    else if(card2==9)
        i++;
    else if(card2==10)
        j++;
    else if(card2==11)
        k++;
    else if(card2==12)
        l++;
    else if(card2==13)
        m++;
    else
        printf("Wrong number\n");

    scanf("%d",&card3);
    if(card3==1)
        a++;
    else if(card3==2)
        b++;
    else if(card3==3)
        c++;
    else if(card3==4)
        d++;
    else if(card3==5)
        e++;
    else if(card3==6)
        f++;
    else if(card3==7)
        g++;
    else if(card3==8)
        h++;
    else if(card3==9)
        i++;
    else if(card3==10)
        j++;
    else if(card3==11)
        k++;
    else if(card3==12)
        l++;
    else if(card3==13)
        m++;
    else
        printf("Wrong number\n");

    scanf("%d",&card4);
    if(card4==1)
        a++;
    else if(card4==2)
        b++;
    else if(card4==3)
        c++;
    else if(card4==4)
        d++;
    else if(card4==5)
        e++;
    else if(card4==6)
        f++;
    else if(card4==7)
        g++;
    else if(card4==8)
        h++;
    else if(card4==9)
        i++;
    else if(card4==10)
        j++;
    else if(card4==11)
        k++;
    else if(card4==12)
        l++;
    else if(card4==13)
        m++;
    else
        printf("Wrong number\n");

    scanf("%d",&card5);
    if(card5==1)
        a++;
    else if(card5==2)
        b++;
    else if(card5==3)
        c++;
    else if(card5==4)
        d++;
    else if(card5==5)
        e++;
    else if(card5==6)
        f++;
    else if(card5==7)
        g++;
    else if(card5==8)
        h++;
    else if(card5==9)
        i++;
    else if(card5==10)
        j++;
    else if(card5==11)
        k++;
    else if(card5==12)
        l++;
    else if(card5==13)
        m++;
    else
        printf("Wrong number\n");

    printf("(%d,%d,%d,%d,%d)\n",card1,card2,card3,card4,card5);

    if((a==3||b==3||c==3||d==3||e==3||f==3||g==3||h==3||i==3||j==3||k==3||l==3||m==3) &&
        (a==2||b==2||c==2||d==2||e==2||f==2||g==2||h==2||i==2||j==2||k==2||l==2||m==2))
        printf("It is a full house\n");
    else
        printf("It is not a full house\n");

    return 0;
}
