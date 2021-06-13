//
// Created by Blessy Antony on 6/13/2021.
//

#include <stdio.h>
#include <stdlib.h>
#include "circular_queue.h"

int main() {
    int opt;
    CQueue cq;
    int x;
    do {
        printf("\n\n0.Exit");
        printf("\n1.Create cqueue");
        printf("\n2.Enqueue element");
        printf("\n3.Dequeue element");
        printf("\n4.Display cqueue");
        printf("\nEnter option ? ");
        scanf("%d", &opt);

        switch (opt) {
            case 0:
                printf("Exiting...\n"); exit(0);
            case 1:
                cq = create_cqueue();
                break;
            case 2:
                printf("\nEnter element to be inserted ? ");
                scanf("%d", &x);
                printf("\nElement inserted = %d", enqueue(&cq, x));
                break;
            case 3:
                printf("\nElement removed = %d", dequeue(&cq));
                break;
            case 4:
                display(cq);
                break;
            default:
                printf("Invalid option");
                break;
        }
    } while(opt != 0);
    return 0;
}