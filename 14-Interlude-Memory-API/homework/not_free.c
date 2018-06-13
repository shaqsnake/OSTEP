#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    char *src = "hello";
    char *dst = (char *) malloc(strlen(src) + 1);
    printf("Forget to free something!\n");
}