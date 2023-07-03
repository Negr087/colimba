#include <stdio.h>
      #define MAXLINE 1000

      int main()
      {
          int len;
          int max = 0;
          char lin[MAXLINE];
          char longest[MAXLINE];

          while ((len = getline(lin, MAXLINE)) > 0) {

                printf("Longest: %d\n", len);
                if (len > max) {
                    max = len;
                    copy(longest, lin);
                }
                printf("Text: %s", lin);
          }
          if (max > 0)
          {
              printf("Longest line:\n");
              printf("Length: %d\n", max);
              printf("Text: %s", longest);
          }
          return 0;
      }
      int getline(char s[], int lim)
      {
          int c, i;
          for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c!= '\n'; ++i)
          {
              s[i] = c;
          }

          if (c == '\n')
          {
              s[i] = c;
              ++i;
          }

          s[i] = '\0';
          return i;
      }

          copy(char to[], char from[])
           {
               int i = 0;
               while ((to[i], from[i]) != '\0') {
                    ++i;
               }
           }
