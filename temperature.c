#include <stdio.h>

/* print Fahrenheit-Celsius table
   for fahr = 0, 20, …, 300
*/

main(){
    // variables
    int fahr, celsius;
    int lower, upper, step;

    // setting variables
    lower = 0; // lower limit of temperature table
    upper = 300; // upper limit
    step = 20; // step size

    fahr = lower;

    while (fahr <= upper) {
        // if the while loop contained one line then the braces can be removed

        // compute celsius equivalent 
        
        celsius = 5 * (fahr-32) / 9; // FYI, integer division is truncated, 5/9 would be 0
        printf("%3d\t%6d\n", fahr, celsius); // right-justify integers with 3 and 6 digit wide 
        fahr = fahr + step;
    }

}