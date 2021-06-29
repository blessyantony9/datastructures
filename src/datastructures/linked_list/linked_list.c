//
// Created by Blessy Antony on 6/19/2021.
//

#include <stdio.h>
#include <malloc.h>
#include "linked_list.h"

LinkedList create_linked_list() {
    LinkedList ll;
    ll.start = NULL;
    return ll;
}

//utility function to dynamically create Node
Node*  create_node(int x) {
    Node* new = (Node* )malloc(sizeof(Node));
    new->data = x;
    new->next = NULL;

    return new;
}

int append(LinkedList* ll, int x) {
    Node* new = create_node(x);
    Node* p = ll->start;
    // LL is empty
    if (p == NULL) {
        ll->start = new;
        return x;
    }
    //else iterate to the end of linked list
    while(p->next != NULL) {
        p = p->next;
    }
    p->next = new;
    return x;
}

int add_beginning(LinkedList* ll, int x) {
    Node* new = create_node(x);
    Node* p = ll->start;
    // LL is empty
    if (p == NULL) {
        ll->start = new;
        return x;
    }
    new->next = ll->start;
    ll->start = new;
    return x;
}

int add_after_n(LinkedList* ll, int x, int n) {
    int ll_size = size(*ll);
    if (n > ll_size) {
        printf("ERROR: Invalid input value of n = %d. Size of linked list = %d\n", n, ll_size);
        return 0;
    }
    Node* new = create_node(x);
    Node* p = ll->start;
    // LL is empty
    if (p == NULL) {
        ll->start = new;
        return x;
    }
    int i;
    for (i = 1; i < n; i++) {
        p = p->next;
    }
    new->next = p->next;
    p->next = new;
    return x;
}

int delete(LinkedList* ll, int x) {
    Node* p = ll->start;
    Node* prev;
    int found_flag = 0;
    if (p == NULL) {
        printf("ERROR: Linked List empty\n");
        return 0;
    }

    prev = p;
    while(p != NULL) {
        if (p->data == x) {
            found_flag = 1;
            break;
        }
        prev = p;
        p = p->next;
    }

    if (found_flag != 1) {
        printf("ERROR: Element = %d not found in Linked List\n", x);
        return 0;
    }

    //delete first element of linked list
    if (ll->start == p) {
        ll->start = ll->start->next;
    }
    // delete second or any later element including last element of the linked list
    else {
        prev->next = p->next;
    }
    free(p);

    return x;
}

void reverse(LinkedList* ll) {
    Node* curr = ll->start;
    Node* prev = NULL;
    Node* next;

    while (curr->next != NULL) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    curr->next = prev;
    ll->start = curr;
}

void display(LinkedList ll) {
    Node* p = ll.start;
    printf("\nLinked List contents :\n||");
    while(p != NULL) {
        printf("%d -> ", p->data);
        p = p->next;
    }
    printf("NULL||\n");
}

int size(LinkedList ll) {
    int count = 0;
    Node* p = ll.start;
    while(p != NULL) {
        count++;
        p = p-> next;
    }
    return count;
}
