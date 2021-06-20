//
// Created by Blessy Antony on 6/19/2021.
//

#ifndef DATASTRUCTURES_LINKED_LIST_H
#define DATASTRUCTURES_LINKED_LIST_H
typedef struct node {
    int data;
    struct node *next;
}Node;


typedef struct {
    Node *start;
}LinkedList;

/*
 * Instantiate a linked list
 * Param: None
 * Return: LinkedList
 * */
LinkedList create_linked_list();

/*
 * Insert element at the end of linked list
 * Param:   LinkedList * - linked list into which element is to be inserted
 *          int - element to be inserted
 * Return: int - inserted element
 * */
int append(LinkedList *ll, int x);

/*
 * Insert element at the start of the linked list
 * Param:   LinkedList * - linked list into which element is to be inserted
 *          int - element to be inserted
 * Return: int - inserted element
 * */
int add_beginning(LinkedList *ll, int x);

/*
 * Insert element after n elements of the linked list
 * Param:   LinkedList * - linked list into which element is to be inserted
 *          int - element to be inserted
 *          int - number of nodes after which the new value is to be inserted
 * Return: int - inserted element
 * */
int add_after_n(LinkedList *ll, int x, int n);

/*
 * Delete an element from linked list
 * Param: LinkedList * - linked list from which element is to be deleted
 *        int - element to be deleted
 * Return: int - element deleted from linked list
 * */
int delete(LinkedList *ll, int x);

/*
 * Print contents of linked list
 * Param: LinkedList - linked list whose contents are to be viewed
 * Return: void
 * */
void display(LinkedList ll);

/*
 * Compute length/size of linked list
 * Param: LinkedList - linked list whose length is to be computed
 * Return: int - length/size of linked list
 * */
int size(LinkedList ll);

#endif //DATASTRUCTURES_LINKED_LIST_H
