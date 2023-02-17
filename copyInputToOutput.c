#include <stdio.h>

/* Copy input to output*/
main(){
    /* variable declaration 
       int is a type big enough to hold any value getchar() returns
       the type char can not store the EOF integer
    */
    int character;

    /* get user input 
       will return a distinctive value when there is no more input, a value that cannot be confused with any real character
    */
    character = getchar();

    while (character != EOF){
        /* display character in the output stream */
        putchar(character);
        character = getchar();
    }
}