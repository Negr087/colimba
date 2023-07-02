#include <stdio.h>
#include <stdlib.h>
#define IN 1   /* inside word */
#define OUT 0  /* outside a word */

int main()
{
    int c;
    int state = OUT;

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t'){
            state = OUT;
            c = '\n';
        }
        else if (state == OUT) {
                state = IN;
    }
        putchar (c);
    }
    return 0;
}
