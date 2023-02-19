#include <stdio.h>

/* symbolic constants */
#define IN 1 /* inside a word */
#define OUT 0 /* outside a word */

/* count lines, words, and characters in input */
main(){
    int c, nl, nw, nc, state;

    state = OUT;

    nl = nw = nc = 0;
    while((c = getchar()) != EOF){
        ++nc; /* prefix increment, not used in an expression so does not matter if its prefix or suffix increment */
        if (c == '\n') /* increment new line counter */
           ++nl;

        /* this if block will be executed for every character */
        if (c == ' ' || c == '\n' || c == '\t') /* anything that is a blank, new line, or tab is considered to be outside of a word */
           state = OUT; /* could this instruction also be in the control statement that handles counting new lines ? */
        else if (state == OUT){ /* character is something other than a blank, newline, or tab */
           state = IN;
           ++nw;
        }  
    }
    printf("Newline Count: %d, Word Count: %d, Character Count: %d", nl, nw, nc);
}


/* 

Exercise 1-11: How would you test the word count program ? What kinds of input are most likely to uncover bugs if there are any ? 

try different words that have the special characters in them

words with the special characters, one word words, lines with all blanks

*/