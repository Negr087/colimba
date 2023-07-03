#include <stdio.h>
#include <stdlib.h>
#define MAX_CHARACTERS 1000
#define MIN_LENGTH 80

int main()
{
    int c;
    int count = 0;
    char line[MAX_CHARACTERS + 1];

    while ((c = getchar()) != EOF) {
        if (count < MAX_CHARACTERS) {
            line[count] = c;
            count++;
        }

        if (c == '\n' || count == MAX_CHARACTERS) {
            if (count > MIN_LENGTH) {
                line[count] = '\0';
                printf("%s\n", line);
            }
            count = 0;
        }
    }
    return 0;
}
