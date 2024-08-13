#include <stdio.h>

void change(int *input_addr)
{
    *input_addr +=10;
    return;
}

int main()
{
    int input;
    printf("Enter a number: ");
    scanf("%d", &input);
    change(&input);
    printf("You entered %d", input);
    return 0;
}