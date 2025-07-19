#include <stdio.h>
#include "lsh_loop.h"

int main(int argc, char **argv) {
    // Load Config files, if any

    //Run command loop
    lsh_loop();

    //Preform any shutdown/cleanup;
    return 0;
}