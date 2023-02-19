#include <stdio.h>

/* any string with one or more blanks is replaced with a single blank */
main(){
    /* string input */
    int input, output, blankFound;

    output = 0;
    blankFound = 0;
    
    while(( input = getchar()) != EOF){
        
        if (input == ' ' && !blankFound){ /* found a blank in the word */
            blankFound = 1;
            putchar(input);
        }
        else if(input == ' ' && blankFound) /* do nothing if another blank is encountered */
            ;
        else /* display the rest of the characters */
            putchar(input);
    }

}
    
