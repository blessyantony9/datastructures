//
// Created by Blessy Antony on 6/10/2021.
//

#include <stdio.h>
# include "string_utils.h"
int main() {
    printf("+++ START: String Utils Test +++\n");
    printf("+++ START: Test xstrlen\n");
    char* test_string_1 = "Test String 1";
    printf("Length of test string using xstrlen_implicit = %d\n", xstrlen_implicit(test_string_1));
    printf("Length of test string using xstrlen_explicit = %d\n", xstrlen_explicit(test_string_1));
    printf("+++ END: Test xstrlen\n");
    printf("+++ START: Test xstrcmp\n");
    char* test_string_2 = "Test String 2";
    printf("Test String 1 == Test String 1 using xstrcmp_explicit: %s\n", xstrcmp_explicit(test_string_1, test_string_1) == 1
                                                    ? "False" : "True");
    printf("Test String 1 == Test String 2 using xstrcmp_explicit: %s\n", xstrcmp_explicit(test_string_1, test_string_2) == 1
                                                            ? "False" : "True");
    printf("Test String 1 == Test String 1 using xstrcmp_implicit : %s\n", xstrcmp_implicit(test_string_1, test_string_1) == 1
                                                    ? "False" : "True");
    printf("Test String 1 == Test String 2 using xstrcmp_implicit : %s\n", xstrcmp_implicit(test_string_1, test_string_2) == 1
                                                    ? "False" : "True");
    printf("+++ END: Test xstrcmp\n");
    printf("+++ START: Test xstrcpy\n");
    char source[50];
    char destination[50];
    printf("Enter string to be copied using explicit pointers?\n");
    scanf("%s", source);
    xstrcpy_explicit(source, destination);
    printf("String copied using explicit pointers = %s\n", destination);

    printf("Enter string to be copied using implicit pointers?\n");
    scanf("%s", source);
    xstrcpy_implicit(source, destination);
    printf("String copied using implicit pointers = %s\n", destination);

    printf("+++ END: Test xstrcpy\n");
    printf("+++ START: Test xstrconcat\n");
    char string_x[100];
    char string_y[50];
    printf("Enter first string to be concatenated using explicit pointers?\n");
    scanf("%s", string_x);
    printf("Enter second string to be concatenated using explicit pointers?\n");
    scanf("%s", string_y);
    xstrconcat_explicit(string_x, string_y);
    printf("String concatenated using explicit pointers = %s\n", string_x);
    printf("Enter first string to be concatenated using implicit pointers?\n");
    scanf("%s", string_x);
    printf("Enter second string to be concatenated using implicit pointers?\n");
    scanf("%s", string_y);
    xstrconcat_explicit(string_x, string_y);
    printf("String concatenated using implicit pointers = %s\n", string_x);
    printf("+++ END: Test xstrconcat\n");
    printf("+++ END: String Utils Test +++");
}