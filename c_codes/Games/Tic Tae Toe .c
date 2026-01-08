#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
void drawboard(char board[][3]);
int checkwin(char board[][3]);
int Timer();
int main(){
    char board[3][3]={' ',' ',' ',' ',' ',' ',' ',' ',' '};
    int row,column,move,gamestatus;
    int turn=1;
    char player1[20], player2[20];
    printf("Enter name of player 1: ");
    scanf("%s",player1);
    printf("Enter name of player 2: ");
    scanf("%s",player2);
    while(1){
    	start:
        drawboard(board);
        turn=(turn%2==0)? 2:1;
        if(turn==1){
        printf("player %s move\n",player1);
        move=Timer();
    }
       if(turn==2){
        printf("player %s move\n",player2);
        move=Timer();
    }
    if(move==0){
    	if (turn == 1)
        	turn++;
        else if (turn == 2)
        	turn--;
    	continue;
	}
	else
	move-='0';
        row=(move-1)/3;
        column=(move-1)%3;
        if(board[row][column]!='X'&&board[row][column]!='O'){
            if(turn==1)
            {
                board[row][column]='X';
            }
            else{
                board[row][column]='O';
            }
        }
        else{
            printf("the cell is already filled\n");
            goto start;
        }
        gamestatus= checkwin(board);
        if(gamestatus==1)
        {
        	drawboard(board);
        	if(turn==1)
            printf("\n%s wins!",player1);
            else
            printf("\n%s wins!",player2);
            
            break;
        }
        else if(gamestatus==2)
        {
        	drawboard(board);
          	printf("\nDRAW");
          	break;
    	}
        if (turn == 1)
        	turn++;
        else if (turn == 2)
        	turn--;
    }


    return 0;
}
void drawboard(char board[][3]){
    int i;
    for(i=0;i<3;i++)
    {
        printf(" %c  |  %c  |  %c \n",board[i][0],board[i][1],board[i][2]);
        if(i!=2)
        {
            printf("----|-----|----\n");
        }
    }
}
int checkwin(char board[][3]){
    int i,j,count=0;
    for(i=0;i<3;i++)
    {
     if(board[i][0]=='X' && board[i][1]=='X' && board[i][2]=='X' || board[i][0]=='O' && board[i][1]=='O' && board[i][2]=='O')
     {
         return 1;
     }
    }
    for(i=0;i<3;i++)
    {
     if(board[0][i]=='X' && board[1][i]=='X' && board[2][i]=='X' || board[0][i]=='O' && board[1][i]=='O' && board[2][i]=='O')
     {
         return 1;
     }  
    }
    if (board[0][0]=='X' && board[1][1]=='X' && board[2][2]=='X' || board[0][0]=='O' && board[1][1]=='O' && board[2][2]=='O')
    {
        return 1;
	}
    if (board[0][2]=='X' && board[1][1]=='X' && board[2][0]=='X' || board[0][2]=='O' && board[1][1]=='O' && board[2][0]=='O' ){
        return 1;
    
    }
    
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
        {
            if(board[i][j]!='X'&& board[i][j]!='O')
            {
               count++;
            }
    
}}
if(count==0){
    return 2;
}
return 0;
}

int Timer(){
    int time_left = 10;         
    int answer = 0;
    printf("You have 10 second to answer\n");

    while (time_left > 0) {
        if (_kbhit()) {         
            answer=_getch();
            printf("\n");
            return answer;
        }

        Sleep(1000);        
        time_left--;

        printf("\rTime left: %d seconds Enter answer: ", time_left);
        fflush(stdout);
    }
 
    printf("\nTime up You are late!\n");
    return 0;  
}
