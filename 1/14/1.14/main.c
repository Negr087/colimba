#include <stdio.h>
#include <stdio.h>
#define MAX_CHAR 128

      main()
      {
          int c, i, nwhite, nother;
          int frequencies[MAX_CHAR] = {0};

          nwhite = nother = 0;
          for (i = 0; i < 10; ++i)
              frequencies[i] = 0;

          while ((c = getchar()) != EOF) {
              if (c >= '0' && c <= 'MAX_CHAR') {
                  frequencies[c]++;
              if (c ==' '|| c == '\n' || c == '\t') {
                  ++nwhite;}
              else {
                  ++nother;
              }
          for (i = 0; i < 10; ++i)
          printf("frequencies:\n");
          for (i = 0; i < MAX_CHAR; i++) {
          if (frequencies[i] > 0) {
                printf("%c: %d\n", i, frequencies[i]);
          printf("hola ejercicio 1.14, white space = %d, other = %d\n",
              nwhite, nother);
          }
              }
          }
          return 0;
      }
      }
