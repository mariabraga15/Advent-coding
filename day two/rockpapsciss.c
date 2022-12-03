#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
int main(){
char game[1000][3];
int n,i,j,op_score=0,my_score=0,valid=1;
printf("Welcome to the game!\n");
printf("The rules are simple!A,B,C are options for your opponents:rock,papers respectively scissors\n");
printf("For you the letters are X,Y,Z with the same meaning..\nLet's see if the strategy given by the elf is correct...\n");
printf("\nGive the number of rounds you want to play:\n ");
scanf("%d",&n);
printf("\n");
for(i=0;i<n;i++)
   {
    printf("game[%d][0]=",i);
    scanf("%s",&game[i][0]);
    printf("game[%d][1]=",i);
    printf("\n");
    scanf("%s",&game[i][1]);}//end scanning
for( i=0;i<n&&(valid==1);i++)
{switch(game[i][0]){
case 'A': {op_score+=1; 
if(game[i][1]=='X')
op_score+=3; 
else if(game[i][1]=='Z')
op_score+=6;
break;} //end A
case 'B':{
op_score+=2;
if(game[i][1]=='Y')
op_score+=3; 
else if(game[i][1]=='X')
op_score+=6;
break;} //end B
case 'C':{op_score+=3;
if(game[i][1]=='Y')
op_score+=6; 
else if(game[i][1]=='Z')
op_score+=3;
 break;}//end C
default: {valid=0;printf("The rounds are not valid\n"); break;}//Default case for switch1
}//end switch1
switch(game[i][1]){
case 'X': {my_score+=1; 
if(game[i][0]=='A')
my_score+=3; 
else if(game[i][0]=='C')
my_score+=6;
break;}//case X
case 'Y':{ my_score+=2; 
if(game[i][0]=='B')
my_score+=3; 
else if(game[i][0]=='A')
my_score+=6;

break;}//case Y
case 'Z':{my_score+=3;
if(game[i][0]=='B')
my_score+=6; 
else if(game[i][0]=='C')
my_score+=3;
break;}//case Z
default: {valid=0; printf("The rounds are not valid\n"); break;}//default switch2

}//end switch2
}
printf("The opponent's score is %d\n",op_score);
printf("My score is %d\n",my_score); //displaying the scores for each player
if(valid==0)
printf("Invalid game");
else
if(op_score>my_score)
printf("You lost the game.Seems the elf needs to rethink the strategy");
else if(op_score==my_score)
printf("It's a draw!Choose another strategy!");
else
printf("You win the game.Congratulate the elf and give him some mulled wine");//the final conclusion
return 0;
}

