#include <stdio.h>

/* write a program to count the number of occurrences of each digit, of white space characters (blank, tab, newline), and of all the other characters */

main(){
    int c, i, nwhite, nother;
    
    /* initialize an array with ten integers */
    int ndigit[10];

    nwhite = nother = 0;
    while((c = getchar()) != EOF){
        if (c >= '0' && c <= '9') /* if the character is one of the ten digits */
            ++ndigit[c-'0']; /* increment its count by 1 in the array */
        else if (c == ' ' || c == '\n' || c == '\t') /* whitespace character */
            ++nwhite; 
        else  /* any other character */
            ++nother;
    }

    printf("digits =");
    for (i = 0; i < 10; ++i)
        printf(" %d", ndigit[i]);

    printf(", white space = %d, other = %d\n", nwhite, nother);
}