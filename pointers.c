#include <stdio.h>

int main()
{
    int x = 10;
    int *px = &x;
    int **ppx = &px;

    printf("\n x = %d", x);
    printf("\n size of x = %d", sizeof(x));
    printf("\n addr of x = %zu", &x);

    printf("\n");

    printf("\n px = %zu", px);
    printf("\n size of px = %d", sizeof(px));
    printf("\n addr of x = %zu", &px);
    printf("\n *px = %d", *px);

    return 0;
}