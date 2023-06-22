#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
        This is a multi-line comment
    */

    // And his is single-line
    printf("Hello world!\n");

    // VARÝABLES

    // Declare a variable
    int myAge;

    // Assign a value to the variable
    myAge = 28;
    printf("Today is my birthday I'm 17");

    /*
        In many other programming languages (like Python, Java, and C++),
        you would normally use a print function to display the value of a variable.
        However, this is not possible in C:

        int myNum = 15;
        printf(myNum);  // Nothing happens
    */

    int myNum = 17;
    printf("%d", myNum);  // Outputs 15
    printf("My favorite number is: %d", myNum);


    return 0;
}
