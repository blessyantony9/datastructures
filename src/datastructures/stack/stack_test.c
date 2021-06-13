//
// Created by Blessy Antony on 6/12/2021.
//

#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

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