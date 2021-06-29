//
// Created by blessy on 6/10/2021.
//

#ifndef STRING_UTILS_H
#define STRING_UTILS_H

/*
 * Compute length of given string
 * Params: string (explicit pointer)
 * Returns: int - length of string
 *
 */
int xstrlen_explicit(char* x);

/*
 * Compute length of given string
 * Params: string (implicit pointer)
 * Returns: int - length of string
 *
 */
int xstrlen_implicit(char x[]);


/*
 * Compare two strings for equality
 * Params: string, string (explicit pointers)
 * Returns: 0: Equal
 *          1: Not Equal
 */
int xstrcmp_explicit(char* x, char* y);

/*
 * Compare two strings for equality
 * Params: string, string (implicit pointers)
 * Returns: 0: Equal
 *          1: Not Equal
 */
int xstrcmp_implicit(char x[], char y[]);

/*
 * Copy contents from one string to another
 * Params: string, string (explicit pointers)
 * Returns: contents copied to dest variable
 */
void xstrcpy_explicit(char *src, char *dest);

/*
 * Copy contents from one string to another
 * Params: string, string (implicit pointers)
 * Returns: contents copied to dest variable
 */
void xstrcpy_implicit(char src[], char dest[]);


/*
 * Concat contents from string y to string x
 * Params: string, string (explicit pointers)
 * Returns: contents concatenated to dest variable
 */
void xstrconcat_explicit(char *x, char *y);

/*
 * Concat contents from string y to string x
 * Params: string, string (implicit pointers)
 * Returns: contents concatenated to dest variable
 */
void xstrconcat_implicit(char x[], char y[]);

#endif //STRING_UTILS_H


