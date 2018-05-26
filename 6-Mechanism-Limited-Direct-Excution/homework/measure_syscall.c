#include <stdio.h>
#include <unistd.h>
#include <sys/time.h>
#include <sys/syscall.h>

int main(int argc, char *argv[]) {
    struct timeval start, end;
    unsigned long elapsed;

    gettimeofday(&start, NULL);
    syscall(SYS_write, 1, "hello world!\n", 14);
    gettimeofday(&end, NULL);

    elapsed = 1000000 * (end.tv_sec - start.tv_sec) + end.tv_usec - start.tv_usec;
    printf("The elapsed time of syscall: %ld microseconds.\n", elapsed);
    
    return 0;
}