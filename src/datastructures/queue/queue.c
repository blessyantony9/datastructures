//
// Created by Blessy Antony on 6/12/2021.
//

#include <stdio.h>
#include "queue.h"

Queue create_queue() {
    Queue q;
    q.rear = -1;
    q.front = -1;
    return q;
}

int enqueue(Queue* q, int x) {
    if (q->rear == QUEUE_SIZE-1) {
        printf("ERROR: Queue full\n");
        return 0;
    }
    q->arr[++q->rear] = x;
    return x;
}

int dequeue(Queue* q) {
    if (q->front == q->rear) {
        printf("ERROR: Queue empty\n");
        return 0;
    }
    return q->arr[++q->front];
}

void display(Queue q) {
    int i;
    printf("\nQueue contents :\n||");
    for (i = q.front + 1; i <= q.rear ; i++) {
        printf("%d\t", q.arr[i]);
    }
    printf("||\n");
}
