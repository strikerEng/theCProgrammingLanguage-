// Hello World 


// Include the standard input/output library
#include <stdio.h>


/* 

The main function can define a type, by default it is int. Ex: int main() {// do something }
Without explicitly stating a type, the compiler will generate a warning.

*/
main(){
    // This is a special function, program begins executing at the beginning of main.
    // Every function must have a main somewhere
    printf("Hello, world\n");

    // Produces the same output as above due to missing \n 
    printf("Hello,");
    printf(" world");
    printf("\n");

    // printf contains \c, where c is an unknown escape sequence
    // This will cause the compiler to generate a warning but the code will still execute
    // printf("\c1");
}