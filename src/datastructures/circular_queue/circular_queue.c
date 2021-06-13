//
// Created by Blessy Antony on 6/13/2021.
//

#include <stdio.h>
#include "circular_queue.h"

CQueue create_cqueue() {
    CQueue cq;
    cq.rear = cq.front = 0;
    return cq;
}

int enqueue(CQueue *cq, int x) {
    if (cq->rear + 1 == cq->front) {
        printf("ERROR: Circular queue full\n");
        return 0;
    }
    cq->rear = (cq->rear + 1) % CIRCULAR_QUEUE_SIZE;
    cq->arr[cq->rear] = x;
    return x;
}

int dequeue(CQueue *cq) {
    if (cq->front == cq->rear) {
        printf("ERROR: Circular queue empty\n");
        return 0;
    }
    cq->front = (cq->front + 1) % CIRCULAR_QUEUE_SIZE;
    return cq->arr[cq->front];
}

void display(CQueue cq) {
    int i = (cq.front + 1) % CIRCULAR_QUEUE_SIZE ;
    printf("\nQueue contents :\n||");
    while (i != (cq.rear+ 1) % CIRCULAR_QUEUE_SIZE) {
        printf("%d\t", cq.arr[i]);
        i = (i + 1) % CIRCULAR_QUEUE_SIZE;
    }
    printf("||\n");
}
