#include <stdio.h>
#define MAXLINE 1000 /* maximum input line size */
#define MINIMUM_LINE_SIZE 80 /* minimum line size to be printed on console */

int getlinelocal(char line[], int maxline); /* returns the line length */
void copy(char to[], char from[]); /* copy character array */
void linetest(char s[], int linelenght); /* display lines that meet a minimum line length */

main(){
    int len; /* current line length */
    int max; /* maximum length seen so far */

    char line[MAXLINE]; /* current input line */
    char line_meets_requirement[MAXLINE]; /* line_meets_requirement line saved here because its at least 'MINIMUM_LINE_SIZE' chars long*/

    max = 0;
    while((len = getlinelocal(line, MAXLINE)) > 0 ){
        printf("The length is %d\n", len);
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
    linetest(s, i);
    return i;
}

/* copy: copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[]){
    int i = 0;

    while((to[i] = from[i]) != '\0')
        ++i;
}

/* linetest: display a line if its at least meets MINIMUM_LINE_SIZE */
void linetest(char s[], int linelenght){
    if (linelenght >= MINIMUM_LINE_SIZE)
        printf("This line is at least %d characters: %s", MINIMUM_LINE_SIZE, s);
}