//
// Created by blessy on 6/10/2021.
//

#include <stdio.h>
#include "string_utils.h"

int xstrlen_explicit(char *x) {
    int length = 0;
    while(*x != '\0') {
        length++;
        x++;
    }
    return length;
}

int xstrlen_implicit(char x[]) {
    int length = 0;
    int i = 0;
    while(x[i] != '\0') {
        length++; i++;
    }
    return length;
}

int xstrcmp_explicit(char *x, char *y) {
    int is_equal = 0;
    int n = xstrlen_implicit(x);
    int i = 0;
    while(i < n) {
        if (*x != y[i]) { // y[i] = *y
            is_equal = 1;
            break;
        }
        x++; i++; // not incrementing y as it is traversed using y[i]
    }
    return is_equal;
}

int xstrcmp_implicit(char x[], char y[]) {
    int is_equal = 0;
    int n = xstrlen_implicit(x);
    int i = 0;
    while(i < n) {
        if (x[i] != y[i]) {
            is_equal = 1;
            break;
        }
        i++;
    }

    return is_equal;
}

void xstrcpy_explicit(char *src, char *dest) {
    do {
        *dest = *src;
        src++; dest++;
    } while(*src != '\0');
    *dest = '\0';
    return;
}

void xstrcpy_implicit(char src[], char dest[]) {
    int i = 0;
    do {
        dest[i] = src[i];
        i++;
    } while(src[i] != '\0');
    dest[i] = '\0';
    return;
}

//Reversed the traversing method to use subscript
void xstrconcat_explicit(char *x, char *y) {
    int i = 0;
    while(x[i] != '\0') {
        i++;
    }
    int j = 0;
    while(y[j] != '\0') {
        x[i] = y[j];
        i++; j++;
    }
    //Copy final NULL character
    x[i] = y[j];
    return;
}

//Reversed the traversing method to NOT use subscript
void xstrconcat_implicit(char x[], char y[]) {
    while(*x != '\0') {
        x++;
    }
    while(*y != '\0') {
        *x = *y;
        x++; y++;
    }
    //Copy final NULL character
    *x = *y;
    return;
}
