#include <stdio.h>
#include <stdlib.h>

/*
    Copy Input to Output app 1st version
*/

int c;

int main(){



    c = getchar();
    while(c != EOF)
    {
        putchar(c);
        c = getchar();
    }

    return 0;
}
