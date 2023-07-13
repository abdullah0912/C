#include <stdio.h>
#include <stdlib.h>

/*
    Count characters from Input 1st version
*/

long no;

int main()
{
    no = 0;
    while (getchar() != EOF){
         ++no;
        printf("%ld\n", no);
    }

    return 0;
}
