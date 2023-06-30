#include <stdio.h>
#include <stdlib.h>

/*
    print Fahrenheit-Celcius table
    for fahr = 0, 20, ..., 300
*/

int main()
{
    int fahr, celcius;
    int lower, upper, step;

    lower = 0;  // Lower limit of temperature table
    upper = 300;    // Upper limit
    step = 20;  // Step size

    fahr = lower;
    while(fahr <= upper){
        celcius = 5 * (fahr-32) / 9;
        printf("%3d %6d\n", fahr, celcius);
        fahr = fahr + step;
    }
    return 0;
}
