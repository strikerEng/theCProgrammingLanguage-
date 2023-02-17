#include <stdio.h>

/* print Fahrenheit-Celsius table
   for fahr = 0, 20, …, 300
*/

main(){
    // variables
    float fahr, celsius;
    int lower, upper, step;

    // setting variables
    lower = 0; // lower limit of temperature table
    upper = 300; // upper limit
    step = 20; // step size

    fahr = lower;

    while (fahr <= upper) {
        // if the while loop contained one line then the braces can be removed

        // compute celsius equivalent 
        
        celsius = (5.0/9.0) * (fahr-32.0); // FYI, integer division is truncated, 5/9 would be 0
        printf("%3.0f %6.1f\n", fahr, celsius); // right-justify integers with 3 and 6 digit wide, fahr no decimal point, celsisu one decimal point
        fahr = fahr + step;
    }

}