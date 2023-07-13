#include <stdio.h>
#include <stdlib.h>

int main()
{
    // 0,1,1,2,3,5,8,13,21...

    int t1 = 0, t2 = 1, t3, n;

    printf("\n Please enter the number of terms : ");
    scanf("%d", &n);

    for(int i = 0; i <= n; i++){
        printf("%d, ", t1);
        t3 = t1 + t2; // 0,1,1
        t1 = t2; // t1 = 1
        t2 = t3; // t2 = t2
    }
    return 0;
}
