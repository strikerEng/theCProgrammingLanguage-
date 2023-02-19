#include <stdio.h>
#define TAB_STOPS 4 /* tab stop is every 4 columns, or 4 spaces */

/* function prototypes */
int detab(void);
int entab(void);

main(){
    int c;

    while (detab())
        ;

    return 0;
}   

/* replace tabs in the input with the proper number of blanks to space to the next tab stop */

int detab(){
    int c, tabcount = 0;

    while ((c = getchar()) != EOF){
        if (c == '\t'){
            ++tabcount;
        }
        else{
            for (int i = 0; i <= tabcount && tabcount > 0; ++i){
                printf("xxxx");
            }
            tabcount = 0;
        }
    }
    return tabcount;
}

/* replace strings of blanks by the minimum number of tabs and blanks to achieve the same spacing */
int entab(){
    int c, blankcount = 0; 

    while ((c = getchar()) != EOF){
        if (c == ' '){
            ++blankcount;
        }
        else{
            printf("remainder: %d", blankcount % TAB_STOPS);
        }

    }

    return 0;
}