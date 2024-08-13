#include <stdio.h>
#include <string.h>

int main()
{
    char *str1 = "My String";
    char *str2 = "New String";
    if (strcmp(str1, str2)) {
        printf("false");
    }
    return 0;
}