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
        else if (state = IN); {
                putchar('\n');
                state = OUT;
    }
    } else {
    putchar(c);
    state = IN;
    }
    }
    return 0;
}
