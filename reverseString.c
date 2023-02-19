#include <stdio.h>
#define MAXLINE 1000 /* maximum input line size */

int getlinelocal(char line[]); /* returns the line length */

main(){
    while((getlinelocal(line)) > 0){

    }
    return 0;
}

/* reverse: print reverse string, return length */
int getlinelocal(char s[]){
    int c, i, j; /* i also acts as the character count, including newlines */

    for(i=0; (c = getchar()) != EOF && c != '\n'; ++i) /* iterate while max lines haven't been reached, no EOF, and no newline character */
        s[i] = c; /* store character */

    /* handle the trailing newline character */
    if (c == '\n'){ 
        s[i] = c;
        ++i; /* increase character count */
    } 

    s[i] = '\0'; /* append escape sequence at the end of the character array */

    j = i; 
    while (j >= 0 ){
        if (s[j] == '\n' || s[j] == '\0') /* do nothing if its an newline or escape sequence character */
            ;
        else /* print character */
            printf("%c", s[j]);
        --j;
    }
    printf("\n");
    return i;
}
