//
// Created by Blessy Antony on 6/12/2021.
//

#ifndef DATASTRUCTURES_STACK_H
#define DATASTRUCTURES_STACK_H
#define STACK_SIZE 100
typedef struct {
    int arr[STACK_SIZE];
    int top;
}Stack;

/*
 * Instantiate a stack
 * Param: None
 * Return: Stack
 * */
Stack create_stack();

/*
 * Insert element into stack
 * Param:   Stack * - stack into which element is to be inserted
 *          int - element to be inserted
 * Return: int - inserted element
 * */
int push(Stack *s, int x);

/*
 * Remove element from stack
 * Param: Stack * - stack from which element is to be removed
 * Return: int - element removed from stack
 * */
int pop(Stack *s);

/*
 * Print contents of stack
 * Param: Stack - stack whose contents are to be viewed
 * Return: void
 * */
void display(Stack s);
#endif //DATASTRUCTURES_STACK_H
