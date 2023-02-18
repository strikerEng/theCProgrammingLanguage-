#include <stdio.h>

/* any string with one or more blanks is replaced with a single blank */
main(){
    /* string input */
    int input, output, blankFound;

    output = 0;
    blankFound = 0;
    
    while(( input = getchar()) != EOF){
        
        if (input == ' ' && !blankFound){
            blankFound = 1;
            putchar(input);
        }
        else if(input == ' ' && blankFound)
            ;
        else
            putchar(input);
    }

}
    
