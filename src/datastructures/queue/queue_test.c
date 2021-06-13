//
// Created by Blessy Antony on 6/12/2021.
//

#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

int main() {
    int opt;
    Queue q;
    int x;
    do {
        printf("\n\n0.Exit");
        printf("\n1.Create queue");
        printf("\n2.Enqueue element");
        printf("\n3.Dequeue element");
        printf("\n4.Display queue");
        printf("\nEnter option ? ");
        scanf("%d", &opt);

        switch (opt) {
            case 0:
                printf("Exiting...\n"); exit(0);
            case 1:
                q = create_queue();
                break;
            case 2:
                printf("\nEnter element to be inserted ? ");
                scanf("%d", &x);
                printf("\nElement inserted = %d", enqueue(&q, x));
                break;
            case 3:
                printf("\nElement removed = %d", dequeue(&q));
                break;
            case 4:
                display(q);
                break;
            default:
                printf("Invalid option");
                break;
        }
    } while(opt != 0);
    return 0;
}