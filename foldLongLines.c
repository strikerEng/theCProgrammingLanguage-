#include <stdio.h>
#define MAX_WIDTH 50 /* max width of lines before starting new line */

int main(){
    int c, charCount = 0;

    while((c = getchar()) != EOF){
        if (charCount > MAX_WIDTH){ /* reached max width, print newline and reset charCount */
            printf("\n");
            charCount = 0;
        }
        else if (c == '\n'){ /* print newline and reset the charCount */
            charCount = 0;
            printf("\n");
        }
        else{ /* print out characters normally */
            printf("%c", c);
            ++charCount;
        }
    }
    return 0;
}