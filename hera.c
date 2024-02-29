#include 'shell.h'

int main (void) {
  char prompt[120];

  do {
    my_prompt();
    read_prompt(prompt, sizeof(prompt));
    execute_prompt(prompt);

  }

  while(1)
