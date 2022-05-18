#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <editline/readline.h>
// #include <editline/history.h>
// cc -std=c99 -Wall simpler_ffc.c -ledit -lm -o simpler_ffc



typedef struct elmt {
  char* tag;
  char* contents;
  struct elmt** children;
} elmt;



elmt read(char* input) {
  char* tokens = strtok(input, " ");

  while (tokens) {
    printf("token: %s\n", tokens);
    tokens = strtok(NULL, " ");
  }

  struct elmt new = {"tag", "contents", NULL};
  printf("token: %s\n", new.tag);
  return new;

}

int main(int argc, char** argv) {

  /* Print Version and Exit Information */
  puts("ASMD Version 0.0.0.0.1");
  puts("Press Ctrl+c to Exit\n");

  /* In a never ending loop */
  while (1) {

    /* Output our prompt and get input */
    char *input = readline("asmd >>> ");
    /* Add input to history */
    add_history(input);

    /* Echo input back to user */
    read(input);
    // printf("%d\n", evaluation);

    /* Free retrieved input */
    free(input);
  }

  return 0;
}