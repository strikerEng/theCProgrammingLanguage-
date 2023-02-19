#include <stdio.h>

/* print histogram of the lengths of words in its input
    every word must have a blank space after it for the histogram points to be displayed
 */
main(){
    int character, characterCount, i ;

    characterCount = 0; /* set character count to 0 */

    while ((character = getchar()) != EOF){

        if (character == ' ') { /* display a newline when the newline character is found in the input */
           putchar(character);
           for (i = 0; i < characterCount; ++i)
               printf("*");
            printf("\n");
            characterCount = 0; /* reset character count for the next word */
        }
        else {/* display every other character on the same line */
           putchar(character);
           ++characterCount;
        }
    }


}