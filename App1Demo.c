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
    printf("Today is my birthday I'm %d", myAge);
    printf("\nHello from ISS");

    /*
        In many other programming languages (like Python, Java, and C++),
        you would normally use a print function to display the value of a variable.
        However, this is not possible in C:

        int myNum = 15;
        printf(myNum); Nothing happens

    */
    int myNum = 17;
    printf("\nMy fav num is %d\n", myNum);

    int Num = 15;
    char myLetter = 'A';
    printf("My new number is %d and my letter is %c", Num, myLetter);


    // ADD VARIABLES TOGETHER

    int x = 5;
    int y = 6;
    int sum = x + y;
    printf("\nThe collection is %d", sum);


    // DECLARE MULTIPLE VARIABLES

    int a = 5, b = 6, c = 50;
    printf("\n%d", a * b + c);


    // WORKİNG WİTH USERINPUT

    int age;
    printf("\nEnter your age: ");
    scanf("%d", &age);
    printf("You are %d years old", age);




    return 0;
}
