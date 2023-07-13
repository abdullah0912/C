#include <stdio.h>
#include <conio.h>
#include <windows.h>
#define ENTER 13
#define TAB 9
#define BACKSPC 8

struct user{
    char fullName[50], email[50], password[50], userName[50], phone[50];
};

void takeInput(char ch[50]){
    fgets(ch, 50, stdin);
    ch[strlen(ch) -1] = 0;
}

char genUsername(char email[50], char userName[50]){
    // abc123@gmail.com

    for(int i =0; i < strlen(email);i++){
        if(email[i] == '@') break;
        else userName[i] = email[i];
    }
}

void takePassword(char pwd[50]){
    int i;
    char ch;
    while(1){
        ch = getch();
        if(ch == ENTER || ch == TAB){
            pwd[i] = '\0';
            break;
        }
        else if(ch == BACKSPC){
            if(i > 0){
                i--;
                printf("\b \b");
            }
        }
        else{
            pwd[i++] = ch;
            printf("* \b");
        }
    }
}

int opt;
struct user user;
char password2[50];

int main()
{
    system("color 0b");
    printf("\n\t\t\t\t----------Welcome to authentication system----------");
    printf("\nPlease choose your operation");
    printf("\n1.Signup");
    printf("\n2.Login");
    printf("\n3.Exit");

    printf("\n\nYour choice:\t");
    scanf("%d", &opt);
    fgetc(stdin);

    switch(opt){
    case 1:
        printf("\nEnter your full name:\t");
        takeInput(user.fullName);
        printf("\nEnter your email:\t");
        takeInput(user.email);
        printf("\nEnter your contact no:\t");
        takeInput(user.phone);
        printf("\nEnter your password:\t");
        takePassword(user.password);
        printf("\nConfirm your password:\t");
        takePassword(password2);

        if(!strcmp(user.password, password2)){
            genUsername(user.email, user.userName);
            printf("\n- Your username is %s", user.userName);
        }
        else{
            printf("\nPassword don't matched");
        }
    }

    return 0;
}
