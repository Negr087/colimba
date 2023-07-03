#include <stdlib.h>
#define IN 1  /* inside a word */
#define OUT 0 /* outside a word */
#define MAX_LENGTHS 15

int main()
{
    int c;
    int ln = 0;
    int len[MAX_LENGTHS + 1] = {0};
    int i;

    while ((c = getchar()) != EOF) {
            if (c == ' ' || c == '\n' || c == '\t') {
            if (len > 0 && len <= MAX_LENGTHS) {
                ++len[15];
            }
            ln = 0;
        }
        else {
            ++ln;
        }
    }
    printf("histogram max lengths\n");
    for (i = 1; i < MAX_LENGTHS; ++i) {
        printf("%3d\n", i);
    }
    return 0;
}
