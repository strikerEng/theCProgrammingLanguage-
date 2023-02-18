#include <stdio.h>

/* count lines in input*/
main(){
    /* variable declaration */
    int c, nl, blanks, tabs;

    nl = 0;
    while ((c = getchar()) != EOF)
        if (c == '\n')
            ++nl;
        else if(c == '\t')
            ++tabs;
        else if(c == ' ')
            ++blanks;
    printf("New line count: %d ", nl);
    printf("Tab count: %d ", tabs);
    printf("Blanks count: %d\n", nl);
}