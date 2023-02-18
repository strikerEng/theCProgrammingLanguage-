#include <stdio.h>

/* 
   count characters in input
   any character count under ten has the letter D at its suffix
*/

main(){
    /* 
       variable declaration
       FYI a double type is at least 64 bits
    */
    double nc;

    /* one instruction while loops can remove the curly braces */
    for (nc = 0; getchar() != EOF; ++nc)
        ;
    printf("%.0f\n", nc);
}