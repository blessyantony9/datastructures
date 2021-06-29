//
// Created by Blessy Antony on 6/13/2021.
//

#ifndef DATASTRUCTURES_CIRCULAR_QUEUE_H
#define DATASTRUCTURES_CIRCULAR_QUEUE_H
#define CIRCULAR_QUEUE_SIZE 10
typedef struct {
    int arr[CIRCULAR_QUEUE_SIZE];
    int rear;
    int front;
} CQueue;

/*
 * Instantiate a cqueue
 * Param: None
 * Return: CQueue
 * */
CQueue create_cqueue();

/*
 * Insert element into cqueue
 * Param:   CQueue*  - cqueue into which element is to be inserted
 *          int - element to be inserted
 * Return: int - inserted element
 * */
int enqueue(CQueue* cq, int x);

/*
 * Remove element from cqueue
 * Param: CQueue*  - cqueue from which element is to be removed
 * Return: int - element removed from cqueue
 * */
int dequeue(CQueue *cq);

/*
 * Print contents of cqueue
 * Param: CQueue - cqueue whose contents are to be viewed
 * Return: void
 * */
void display(CQueue cq);
#endif //DATASTRUCTURES_CIRCULAR_QUEUE_H
