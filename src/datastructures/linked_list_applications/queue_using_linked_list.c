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
    Node* front;
    Node* rear;
}Queue;


Queue create_queue() {
    Queue q;
    q.rear = NULL;
    q.front = NULL;
    return q;
}

int enqueue(Queue* q, int x) {
    Node* new = (Node*) malloc(sizeof (Node));
    new->data = x;
    new->next = NULL;

    if (q->rear == NULL) {
        q->rear = new;
        q->front = new;
    } else {
        q->rear->next = new;
        q->rear = new;
    }
    return new->data;
}

int dequeue(Queue* q) {
    if (q->front == NULL) {
        printf("ERROR: Queue empty\n");
        return 0;
    }

    Node* p = q->front;
    q->front = q->front->next;
    if (q->front == NULL) { // avoid dangling pointer 'q->rear'
        q->rear = NULL;
    }
    int element = p->data;
    free(p);

    return element;
}

void display(Queue q) {
    Node* p = q.front;
    printf("\nQueue contents :\n||");
    while(p != NULL) {
        printf("%d\t", p->data);
        p = p->next;
    }
    printf("||\n");
}

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