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

    // Heading
    printf("Fahrenheit-Celsius table\n");

    while (fahr <= upper) {
        // if the while loop contained one line then the braces can be removed

        // compute celsius equivalent 

        celsius = (5.0/9.0) * (fahr-32.0); // FYI, integer division is truncated, 5/9 would be 0
        printf("%3.0f %6.1f\n", fahr, celsius); // right-justify integers with 3 and 6 digit wide, fahr no decimal point, celsisu one decimal point
        fahr = fahr + step;
    }

    // Heading
    printf("Celsius- Fahrenheit table\n");

    celsius = lower;

    while(celsius <= upper){

        // compute fahrenheit equivalent, (0°C × 9/5) + 32
        fahr = celsius * (9.0/5.0) + 32.0;
        printf("%3.0f %6.1f\n", celsius, fahr);
        celsius = celsius + step;
        
    }

    // Heading
    printf("Reverse Fahrenheit-Celsius table\n");

    for(fahr = 300; fahr >= lower; fahr = fahr - step){
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%3.0f %6.1f\n", fahr, celsius);
    }
}