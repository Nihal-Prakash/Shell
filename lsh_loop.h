#include "lsh_read_line.h"

void lsh_loop(void) {
    char *line;
    char **args;
    int status;

    do {
        prinft("> ");
        line = lsh_read_line();
        args = lsh_split_line(line);
        status = lsh_execute(args);

        free(line);
        free(args);
    } while(status);
}