#include <stdio.h>

int main(){

    int size_char = sizeof(char);
    int size_int = sizeof(int);
    int size_short = sizeof(short);
    int size_long = sizeof(long);
    int size_float = sizeof(float);
    int size_double = sizeof(double);
    int size_longdouble = sizeof(long double);

    printf("\n Characters");
    printf("\n  Size of char: %2d", size_char);

    printf("\n\n Numbers");
    printf("\n  Size of int: %2d", size_int);
    printf("\n  Size of short: %2d", size_short);
    printf("\n  Size of long: %2d", size_long);

    printf("\n\n Fractional Numbers");
    printf("\n  float: %2d Bytes", size_float);
    printf("\n  double: %2d Bytes", size_double);
    printf("\n  long double: %2d bytes", size_longdouble);


    return 0;

}