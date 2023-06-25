#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

/*
    Rock, Paper & Scissor Game
*/

int userChoice, machChoice;
int userScore = 0;
int machScore =0;

int main()
{
    srand(time(0));
    printf("\t\t\t\t==========*Welcome To Rock, Paper & Scissor Game*==========");
    while (userChoice != 4){
        printf("\nPlease select the option:");
        printf("\n1.Rock");
        printf("\n2.Paper");
        printf("\n3.Scissor");
        printf("\n4.Quit\n");
        scanf("%d", &userChoice);
        machChoice = (rand() % 3) +1; // rand -> Random Function
        checkOptions(userChoice, machChoice);
    }
}

void funcWon(){
    printf("--------------------\n");
    printf("| Victory! You Won |\n");
    printf("--------------------\n");
    userScore++;
}

void funcLose(){
    printf("-----------------------\n");
    printf("| Game Over! You Lose |\n");
    printf("-----------------------\n");
    machScore++;
}

void funcTie(){
    printf("--------------\n");
    printf("| It's a Tie |\n");
    printf("--------------\n");
}

void funcFinalScore(){
    printf("|     Final Score:     |\n");
    printf("|         You: %d       |\n",userScore);
    printf("|       Machine: %d     |\n",machScore);
    printf("------------------------\n");
    printf("\a");
}

void checkOptions(int user, int mach){
    // 1 = Scissor, 2 = Paper, 3 = Rock

    if(user == mach){
        funcTie();
    }
    else if(user == 1){
        if(mach == 2){
            funcWon();
        }
        else
        {
            funcLose();
        }
    }
    else if(user == 2){
        if(mach == 1){
            funcWon();
        }
        else
        {
            funcLose();
        }
    }
    else if(user == 3){
        if(mach == 1){
            funcWon();
        }
        else
        {
            funcLose();
        }
    }
    else if(userChoice == 4){
        printf("------------------------\n");
        if(userScore > machScore){
            printf("|   Victory! You Won   |\n");
        }
        else if(userScore < machScore){
            printf("| Game Over! You Lose  |\n");
        }
        else{
            printf("|    Friendship Won    |\n");
        }

        funcFinalScore();
    }
    else{
        Beep(750, 500);
        printf("\n Invalid Option");
    }
}

