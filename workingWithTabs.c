#include <stdio.h>
#define TAB_STOPS 4 /* tab stop is every 4 columns, or 4 spaces */

/* function prototypes */
int detab(void);
int entab(void);

main(){
    int c;

    while (entab())
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
    int c, blankcount = 0, tabsToCreate = 0, blanksToCreate = 0; 

    while ((c = getchar()) != EOF){
        if (c == ' '){
            ++blankcount;
        }
        else{
            tabsToCreate = blankcount / TAB_STOPS;
            blanksToCreate = blankcount % TAB_STOPS;

            printf("Full tabs: %d", tabsToCreate);
            printf(" Blank spaces: %d", blanksToCreate);
            printf("\n");

            for(int i = 0; i < tabsToCreate; ++i){
                printf("tttt"); /* to visually see the tabs */
            }

            for(int i = 0; i < blanksToCreate; ++i){
                printf("b"); /* to visually see the blanks */
            }
            printf("\n");
            blankcount = 0; /* reset blank counter */
        }

    }

    return 0;
}