#include <stdio.h>
#define MAXLINE 1000

int getline(char line[], int maxline);

int main()
{
    char line[MAXLINE];
    int i, c;

    while ((c =getchar()) != EOF) {
        if (c == '\n') {
            line[i] = c;
            ++i;
            line[i] = '\0';

            if (i > 1) {
                printf("%s", line);
            }

            i = 0;
        } else if (c != ' ' && c != '\t') {
            line[i] = c;
            ++i;
        }
    }

    return 0;
}

int getline(char line[], int maxline) {
    int c, i;

    for (i = 0; i < maxline - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
        if (c != ' ' && c != '\t') {
            line[i] = c;
        }
    }

    if (c == '\n') {
        line[i] = c;
        ++i;
    }

    line[i] = '\0';
    return i;
}
