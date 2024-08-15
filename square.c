#include <stdio.h>

int main()
{
    int number = 42;
    int counter = 0;

    while (counter < number ){
        printf("*");
        counter = counter + 1 ;
    }

    return 0;
}