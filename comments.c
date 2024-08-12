#include <stdio.h>

int main()
{

/*
Prints 10 stars
*/
for (int i = 0; i < 10; i++){ // i = rows, j = cols
    for (int j=0; j < 10; j++){
        printf("* ");    
    }
    printf("\n");
    }

return 0;

}