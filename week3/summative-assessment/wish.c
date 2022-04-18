#include "wish.h"
#include <ctype.h>  // isspace
#include <regex.h>  // regcomp, regexec, regfree
#include <stdio.h>  // fopen, fclose, fileno, getline, feof
#include <stdlib.h> // exit
#include <sys/types.h>
#include <sys/wait.h> // waitpid

int main(int argc, char *argv[])
{
  if (argc < 2)
  { // Interactive mode
    while (1)
    {
      printf("wish> ");
      char command[1024];
      scanf("%[^\n]", line);
      printf("%s", line);
      printf("\n");
      if (strcmp(line, "exit") == 0)
      { // Exit
        break;
      }
      else
      {
        system(line);
        exit(1);
      }
    }
  }

  else
  { // batch mode
    printf("Batch mode, WIP.\n");
  }
  return 0;
}