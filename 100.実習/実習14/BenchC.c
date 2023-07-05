#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <sys/time.h>

typedef struct {
    int n0;
} Bench;

int calc(Bench *s, int n){
    int n1 = s->n0 + (1 - 2 * (n % 2));
    s->n0 = n;
    return n1;
}

double gettimeofday_sec()
{
    struct timeval tv;
    gettimeofday(&tv, NULL);
    return tv.tv_sec + (double)tv.tv_usec * 1e-6;
}

int main(){
    // Declaration
    unsigned int i;
    int          n = 1;
    double       t1, t2;

    // Instantiation
    Bench *objBench = (Bench *)malloc(sizeof(Bench));
    objBench->n0 = 0;

    // Main process
    t1 = gettimeofday_sec();
    for (i = 0; i < INT_MAX; i++) {
        n = calc(objBench, n);
    }
    t2 = gettimeofday_sec();
    printf("C\t-> %8.4f secs.\n", t2 - t1);

    // Finish
    free(objBench);
    return 0;
}