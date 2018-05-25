#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main(int argc, char *argv[]) {
    int x = 100;
    int rc = fork();
    if (rc < 0) {
        fprintf(stderr, "fork failed.");
        exit(1);
    } else if (rc == 0) {
        x = 101;
        printf("child: %d", x);
    } else {
        x = 102;
        wait(NULL);
        printf("parent: %d\n", x);
    }
    return 0;
}