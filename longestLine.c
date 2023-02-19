#include <stdio.h>
#define MAXLINE 1000 /* maximum input line size */

int getlinelocal(char line[], int maxline); /* returns the line length */
void copy(char to[], char from[]); /* copy character array */

/* prints longest input line */
main(){
    int len; /* current line length */
    int max; /* maximum length seen so far */

    char line[MAXLINE]; /* current input line */
    char longest[MAXLINE]; /* longest line saved here */

    max = 0;
    while((len = getlinelocal(line, MAXLINE)) > 0 ){
        if (len > max){ /* longer line found */
            max = len;
            copy(longest, line); /* update longest with line */
        }
    if (max > 0) /* only print out if the line was greater than 0 */
        printf("Longest-line: %s Len: %d\n", longest, max);
    }
    return 0;
}

/* getlinelocal: read a line into s, return length */
int getlinelocal(char s[], int lim){
    int c, i; /* i also acts as the character count, including newlines */

    for(i=0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; ++i) /* iterate while max lines haven't been reached, no EOF, and no newline character */
        s[i] = c; /* store character */

    /* handle the trailing newline character */
    if (c == '\n'){ 
        s[i] = c;
        ++i; /* increase character count */
    } 

    s[i] = '\0'; /* append escape sequence at the end of the character array */
    return i;
}

/* copy: copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[]){
    int i = 0;

    while((to[i] = from[i]) != '\0')
        ++i;
}