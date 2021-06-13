//
// Created by Blessy Antony on 6/12/2021.
//

#ifndef DATASTRUCTURES_QUEUE_H
#define DATASTRUCTURES_QUEUE_H
#define QUEUE_SIZE 10
typedef struct {
    int arr[QUEUE_SIZE];
    int rear;
    int front;
} Queue;

/*
 * Instantiate a queue
 * Param: None
 * Return: Queue
 * */
Queue create_queue();

/*
 * Insert element into queue
 * Param:   Queue * - queue into which element is to be inserted
 *          int - element to be inserted
 * Return: int - inserted element
 * */
int enqueue(Queue *q, int x);

/*
 * Remove element from queue
 * Param: Queue * - queue from which element is to be removed
 * Return: int - element removed from queue
 * */
int dequeue(Queue *q);

/*
 * Print contents of queue
 * Param: Queue - queue whose contents are to be viewed
 * Return: void
 * */
void display(Queue q);

#endif //DATASTRUCTURES_QUEUE_H
