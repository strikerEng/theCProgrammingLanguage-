#include <stdio.h>

/* 
   count characters in input
   any character count under ten has the letter D at its suffix
*/

main(){
    /* 
       variable declaration
       FYI a long type is at least 32 bits
    */
    long nc;

    nc = 0;
    /* one instruction while loops can remove the curly braces */
    while(getchar() != EOF)
        ++nc;
    printf("%ld\n", nc);
}