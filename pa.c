#include <stdio.h>
#define BUFFER_SIZE 5

typedef struct {
    int a[BUFFER_SIZE];
    int *pa;
} Circle;


void add(Circle *c, int data)
{
    *c->pa = data;
    if (c->pa != &c->a[BUFFER_SIZE -1]){
        c->pa++;
    }
    else {
        c->pa = &c->a[0];
    }
    
    return;
}

int main()
{
    Circle c = {0};
    c.pa = &c.a[0];

    add(&c, 11);
    add(&c, 14);
    add(&c, 15);
    add(&c, 16);
    add(&c, 17);
    add(&c, 13);

    for (int i = 0; i < BUFFER_SIZE; i++){
        printf("%d ", c.a[i]);
    }

    return 0;
}