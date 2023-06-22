#include <stdio.h>
#include <stdlib.h>

int main(){
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

    /*
        In many other programming languages (like Python, Java, and C++),
        you would normally use a print function to display the value of a variable.
        However, this is not possible in C:

        int myNum = 15;
        printf(myNum);  // Nothing happens
    */

    int myNum = 15;
    printf("%d", myNum);  // Outputs 15


    /*
        To print other types, use %c for char and %f for float:
    */


    // Create variables
    int Age = 17;            // Integer (whole number)
    float myFloatNum = 5.99;   // Floating point number
    char myLetter = 'D';       // Character

    // Print variables
    printf("%d\n", Age);
    printf("%f\n", myFloatNum);
    printf("%c\n", myLetter);













    return 0;
}

