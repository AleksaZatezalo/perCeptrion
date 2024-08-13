#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rand_int(int upper, int lower)
{
    return rand() % (upper - lower + 1) + lower;
}

float rand_float()
{
    return (float)rand()/ (float)RAND_MAX;
}

int main()
{
    srand(time(0));
    float x = rand_float();
    printf("\n%f", x);
    return 0;
}