#include <stdio.h>


/* print its input one word per line */
main(){
    int character;

    while ((character = getchar()) != EOF){
        if (character == ' ') /* display a newline when the newline character is found in the input */
           printf("\n");
        else /* display every other character on the same line */
           putchar(character);
    }
}