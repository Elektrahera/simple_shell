include "shell.h"

void hera_printf(const char *my_function) {
 write(STDOUT_FILENO, my_function, strlen (my_function));
 }
