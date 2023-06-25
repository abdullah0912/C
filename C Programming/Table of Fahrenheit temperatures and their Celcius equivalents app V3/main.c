#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
        Print Fahrenheit-Celcius table with for statement
    */

    int fahr;

    for(fahr = 0; fahr <= 300; fahr = fahr +20){
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
    }

    printf("\n----------------------------------------------\n");

    /*
        Modify the temperature conversion program to print the table in reverse order,
        that is, 300 degrees to 0
    */

    int _fahr;

    for(_fahr = 300; _fahr >= 0; _fahr = _fahr -20){
        printf("%3d %6.1f\n", _fahr, (5.0/9.0)*(_fahr-32));
    }
    return 0;
}
