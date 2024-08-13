#include <stdio.h>

struct node {
    int data;
    struct node *next;
};

typedef struct node Node;

void link (int data)
{
    return;
}

void print_links()
{
    return;
}

int main()
{
    link(32);
    link(12);
    link(77);

    print_links();

    return 0;
}