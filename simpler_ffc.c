#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <editline/readline.h>
// #include <editline/history.h>


typedef struct Op_elmt {
  char* tag;
  char* contents;
  struct Op_elmt** children;
} op_elmt;


op_elmt get_elmt(char* tag, char* contents, op_elmt** children) {
  op_elmt
}


op_elmt read(char* input) {
  char* token = strtok(input, " ");

  while (token) {
    printf("token: %s\n", token);

    token = strtok(NULL, " ");
  }
}


int eval(char* input) {
  


  return 5;
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
    int evaluation = eval(input);
    printf("%d\n", evaluation);

    /* Free retrieved input */
    free(input);
  }

  return 0;
}