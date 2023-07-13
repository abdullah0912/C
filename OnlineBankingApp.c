#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct user{
    char phone[50];
    char ac[50]; // Account no
    char password[50];
    float balance;
};

int opt;

int main()
{
    struct user usr;
    FILE *fp;
    char filename[50];

    printf("\nWhat do you want to do?");
    printf("\n\n1. Register an account");
    printf("\n2. Login to an account");

    printf("\n\nYour choice:\t");
    scanf("%d", &opt);

    if(opt == 1){
        system("clear");
        printf("Enter your account no:\t");
        scanf("%s", usr.ac);
        printf("Enter your phone no:\t");
        scanf("%s", usr.phone);
        printf("Enter your new password:\t");
        scanf("%s", usr.password);
        usr.balance = 0;
    }

    return 0;
}
