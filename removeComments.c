#include <stdio.h>
#define FORWARD_SLASH '/'
#define ASTERICK '*'

/* function prototype to remove comments from a C program */
void removeComments(char s[]);

// this is a comment and it ends here … 
/* comment */

int main(){
    int c, singlelineCommentFound = 0, multilineCommentFound = 0, forwardSlashFound = 0, asterickFound = 0; /* variable declaration*/
    int closingAsterick = 0;
    
    while ((c = getchar()) != EOF){
        if (c == FORWARD_SLASH && closingAsterick && multilineCommentFound){ /* found the trailing forward slash of a multiline comment */
            printf("multiline comment finished.");

            /* reset variables */

            multilineCommentFound = 0; 
            forwardSlashFound = 0;
            closingAsterick = 0;
        }

        if (c == FORWARD_SLASH && !forwardSlashFound){ /* forward slash found in input, only execute this on the first forward slash found */
            forwardSlashFound = 1;
            continue; /* go to the next iteration after the first forward slash is found */
        }
        else if (c == FORWARD_SLASH && forwardSlashFound && !multilineCommentFound){ /* singleline comment found */
            //printf("Single line comment found\n");
            singlelineCommentFound = 1;
        }
        else if (c == ASTERICK && forwardSlashFound && !multilineCommentFound){ /* multiline comment found */
            //printf("Multiline comment found\n");
            multilineCommentFound = 1;
        }
        else if (c == ASTERICK && forwardSlashFound && multilineCommentFound){ /* asterick found */
            closingAsterick = 1;
        }
        else{ 
            if (c == '\n' && singlelineCommentFound && !multilineCommentFound){ /* at the end of the singleline comment found */
                //printf("Single line comment finished.\n");
                /* reset variables */

                singlelineCommentFound = 0; 
                forwardSlashFound = 0;
            }
            else{
                if (singlelineCommentFound || multilineCommentFound){
                    ;
                }
                else{
                    putchar(c);
                }
            }
        }
    }

    return 0;
}