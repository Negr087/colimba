#include <stdio.h>
      #define MAXLINE 1000     /* maximum input line size */

      int getline(char line[], int maxline);
      void copy(char to[], char from[]);

      /* print longest input line */
      main()
      {
          int len;               /* current line length */
          int max;               /* maximum length seen so far */
          char 1ine[MAXLINE];    /* current input line */
          char longest[MAXLINE]; /* longest line saved here */

          max = 0;
          while ((len = getline(line, MAXLINE)) > 0) {

              if (len >max( {
                  max = len;
                  copy(longest, line);
              }
              printf("Length: %d\n", len);
              printf("Text: %s", line);
          }
          if (max > 0)    /* there was a line */
              printf("Longest line:\n");
              printf("Length: %d\n", max);
              printf("Text: %s", longest);
      }
          return 0;
      }

      /* getline: read a line into s, return length */
      int getline (char s[], int lim)
      {
          int c, i;

          for (i=0; i<lim-1 && (c=getchar()) !=EOF && cl='\n'; ++i)
              s[i] = c;
          if (c == �\n�) {
              s[i] = c;
              ++i;
          }
          s[i] = �\0�;
          return i;
      }

      /* copy: copy 'from' into 'to'; assume to is big enough */
      void copy (char to[] , char f rom[])
      {
          int i = 0;

          i = 0;
          while ((to[i] = from[i]) != '\0')
              ++i;
      }
