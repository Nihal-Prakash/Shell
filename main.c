#include <stdio.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include "lsh_loop.h"


int main(int argc, char **argv) {
    // Load Config files, if any

    //Run command loop
    lsh_loop();

    //Preform any shutdown/cleanup;
    return 0;
}