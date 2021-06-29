//
// Created by Blessy Antony on 6/20/2021.
//

#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

int main() {
    int opt;
    LinkedList ll;
    int x;
    do {
        printf("\n\n0.Exit");
        printf("\n1.Create linked list");
        printf("\n2.Append element");
        printf("\n3.Add element at beginning");
        printf("\n4.Add element after n nodes");
        printf("\n5.Delete element");
        printf("\n6.Reverse linked list");
        printf("\n7.Display linked list");
        printf("\n8.Size of linked list");
        printf("\nEnter option ? ");
        scanf("%d", &opt);

        switch (opt) {
            case 0:
                printf("Exiting...\n"); exit(0);
            case 1:
                ll = create_linked_list();
                break;
            case 2:
                printf("\nEnter element to be appended ? ");
                scanf("%d", &x);
                printf("\nElement inserted = %d", append(&ll, x));
                break;
            case 3:
                printf("\nEnter element to be added at beginning ? ");
                scanf("%d", &x);
                printf("\nElement inserted = %d", add_beginning(&ll, x));
                break;
            case 4:
                printf("\nEnter element to be added ? ");
                scanf("%d", &x);
                int n;
                printf("\nEnter value of n ? ");
                scanf("%d", &n);
                printf("\nElement inserted = %d", add_after_n(&ll, x, n));
                break;
            case 5:
                printf("\nEnter element to be deleted ? ");
                scanf("%d", &x);
                printf("\nElement removed = %d", delete(&ll, x));
                break;
            case 6:
                reverse(&ll);
                printf("\nLinked list reverse complete.");
                display(ll);
                break;
            case 7:
                display(ll);
                break;
            case 8:
                printf("Size/length of linked list = %d", size(ll));
                break;
            default:
                printf("Invalid option");
                break;
        }
    } while(opt != 0);
    return 0;
}