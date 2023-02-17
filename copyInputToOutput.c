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

    /* value of the EOF symbolic constant */
    printf("The value of the EOF symbolic constant is %i\n",EOF);

    /* verify that getchar() != EOF is 0 or 1 
       can trigger a EOF with ctrl+D
    */
    int res = getchar() != EOF;
    printf("Result: %d\n", res);

    while ((character = getchar()) != EOF){
        /* display character in the output stream */
        putchar(character);
    }
}