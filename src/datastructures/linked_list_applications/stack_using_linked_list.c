//
// Created by Blessy Antony on 6/28/2021.
//

#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node* next;
}Node;

typedef struct {
    Node* top;
}Stack;

Stack create_stack() {
    Stack s;
    s.top = NULL;
    return s;
}

int push(Stack* s, int x) {
    Node* new = (Node*) malloc(sizeof(Node));
    new->data = x;
    new->next = NULL;

    if (s->top == NULL) {
        s->top = new;
    } else {
        new->next = s->top;
        s->top = new;
    }
    return new->data;
}

int pop(Stack* s) {
    if (s->top == NULL) {
        printf("ERROR: Stack empty\n");
        return 0;
    }
    Node* p = s->top;
    s->top = s->top->next;
    int element = p->data;
    free(p);

    return element;
}

void display(Stack s) {
    printf("\nStack contents :\n||");
    Node* p = s.top;
    while(p != NULL) {
        printf("%d\t", p->data);
        p = p->next;
    }
    printf("||\n");
}

int main() {
    int opt;
    Stack s;
    int x;
    do {
        printf("\n\n0.Exit");
        printf("\n1.Create stack");
        printf("\n2.Push element");
        printf("\n3.Pop element");
        printf("\n4.Display stack");
        printf("\nEnter option ? ");
        scanf("%d", &opt);

        switch (opt) {
            case 0:
                printf("Exiting...\n"); exit(0);
            case 1:
                s = create_stack();
                break;
            case 2:
                printf("\nEnter element to be inserted ? ");
                scanf("%d", &x);
                printf("\nElement inserted = %d", push(&s, x));
                break;
            case 3:
                printf("\nElement removed = %d", pop(&s));
                break;
            case 4:
                display(s);
                break;
            default:
                printf("Invalid option");
                break;
        }
    } while(opt != 0);
    return 0;
}