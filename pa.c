#include <stdio.h>
#define BUFFER_SIZE 5

typedef struct {
    int a[BUFFER_SIZE];
    int *pa;
} Circle;


void add(Circle *c, int data)
{
    *c->pa = data;
    // if (c->pa != &c->a[BUFFER_SIZE -1]){
    //     c->pa++;
    // }
    // else {
    //     c->pa = &c->a[0];
    // }
    
    c->pa = (c->pa != &c->a[BUFFER_SIZE - 1]) ? c->pa + 1 : &c->a[0];

    return;
}

int main()
{
    Circle c = {0};
    c.pa = &c.a[0];

    for (int i = 0; i < 1000000000; i++){
        add(&c, i);
        
    }

    for (int i = 0; i < BUFFER_SIZE; i++){
        printf("%d ", c.a[i]);
    }

    return 0;
}