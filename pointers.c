#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

typedef struct node Node;

Node *head = NULL;
Node *tail = NULL; 

void link (int data)
{
    Node *new = malloc(sizeof(Node));
    new->data = data;
    new->next = NULL;

    if (head == NULL){
        head = new;
        tail = new;
    } else {
        tail->next=new;
        tail = new;
    }

    return;
}

void print_links()
{
    Node *track = head;
    while (track != NULL) {
        printf("\n%d", track->data);
        track = track->next;
    }
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