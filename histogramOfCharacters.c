#include <stdio.h>

main(){
    /* initialize an array with ten integers */
    int c, i, j, aLowerASCII;
    int ndigit[10];
    int nlower[26];

    aLowerASCII = 97; /* ASCII value of an lowercased a */

    /* set all entries to zero */
    for (i = 0; i < 10; ++i){
        ndigit[i] = 0;
    }

    for (i = 0; i < 26; ++i){
        nlower[i] = 0;
    }

    while((c = getchar()) != EOF){
        if (c >= '0' && c <= '9') /* if the character is one of the ten digits */
            ++ndigit[c-'0']; /* increment its count by 1 in the array */
        else{
            ++nlower[c-aLowerASCII]; /* subtract from lowercase a ASCII to get a zero index for all lower cased characters */
        }
    }

    printf("digits =\n");
    for (i = 0; i < 10; ++i) /* BUG: for some reason I can not access the value of the array entry as shown in the below print statment*/
        printf(" Digit %d: Count: %d \n", i, ndigit[i]); 

    printf("lowercased letters =");
    for (i = 0; i < 26; ++i)
        printf(" %d", nlower[i]);
    printf("\n");


}