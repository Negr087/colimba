#include <stdio.h>
#define IN 1   /* inside a word */
#define OUT 0  /* outside a word in input */

/* count words */

int main()
{
    int c;
    int nw = 0;

    while ((c = getchar()) != EOF) {
            ++nw;
            if (c =='\n')
    printf("%d %d\n", nw, c);
    }
    return 0;
}
