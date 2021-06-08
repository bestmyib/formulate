#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../inc/util.h"

int main(int argc, char** argv) {
    printf("FORMULATE 1.0.0\n\n");

    if (argc < 3) {
        printf("Too few arguments\n");
    }

    if (strcmp(argv[1], "compile") == 0) {
        char* source = readAsciiFile(argv[2]);
        printf("%s\n", source);
        free(source);
    }

    return 0;
}