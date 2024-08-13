#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rand_int(int upper, int lower)
{
    return rand() % (upper - lower + 1) + lower;
}

int main()
{
    srand(time(0));
    int x = rand_int(50, 40);
    printf("%d", x);
    return 0;
}