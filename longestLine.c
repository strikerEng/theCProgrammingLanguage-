#include <stdio.h>
#define MAXLINE 1000 /* maximum input line size */

int max; /* maximum length seen so far */

char line[MAXLINE]; /* current input line */
char longest[MAXLINE]; /* longest line saved here */

int getlinelocal(void); /* returns the line length */
void copy(void); /* copy character array */

/* prints longest input line */
main(){
    int len; /* current line length */
    extern int max;
    extern char longest[];

    max = 0;
    while((len = getlinelocal()) > 0 ){
        if (len > max){ /* longer line found */
            max = len;
            copy(); /* update longest with line */
        }
    if (max > 0) /* only print out if the line was greater than 0 */
        printf("Longest-line: %s Len: %d\n", longest, max);
    }
    return 0;
}

/* getlinelocal: read a line into s, return length */
int getlinelocal(void){
    int c, i; /* i also acts as the character count, including newlines */
    extern char line[];

    for(i=0; i < MAXLINE-1 && (c = getchar()) != EOF && c != '\n'; ++i) /* iterate while max lines haven't been reached, no EOF, and no newline character */
        line[i] = c; /* store character */

    /* handle the trailing newline character */
    if (c == '\n'){ 
        line[i] = c;
        ++i; /* increase character count */
    } 

    line[i] = '\0'; /* append escape sequence at the end of the character array */
    return i;
}

/* copy: copy 'from' into 'to'; assume to is big enough */
void copy(void){
    int i = 0;
    extern char line[], longest[];

    while((longest[i] = line[i]) != '\0')
        ++i;
}