#include <stdio.h>

int main()
{
        int c;
        int blanks = 0;
        int tabs = 0;
        int newlines = 0;

        while ((c = getchar()) != EOF)
        {
            if (c == ' ')
                blanks++;
            if (c == '\t')
                tabs++;
            if (c == '\n')
                newlines++;
        }

        printf("%d\n", blanks);
        printf("%d\n", tabs);
        printf("%d\n", newlines);

        return 0;
}
