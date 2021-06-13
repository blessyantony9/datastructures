//
// Created by Blessy Antony on 6/12/2021.
//

#include <stdio.h>
#include "stack.h"

Stack create_stack() {
    Stack stack;
    stack.top = -1;
    return stack;
}

int push(Stack *s, int x) {
    if (s->top == (STACK_SIZE - 1)) {
        printf("ERROR: Stack full\n");
        return 0;
    }
    s->arr[++s->top] = x;
    return x;
}

int pop(Stack *s) {
    if (s->top == -1) {
        printf("ERROR: Stack empty\n");
        return 0;
    }
    return s->arr[s->top--];
}

void display(Stack s) {
    int i;
    printf("\nStack contents :\n||");
    for (i = s.top; i >= 0 ; i--) {
        printf("%d\t", s.arr[i]);
    }
    printf("||\n");
}