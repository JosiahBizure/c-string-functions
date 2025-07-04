#ifndef STRING_UTILS_H
#define STRING_UTILS_H

#include <stdlib.h> // size_t, NULL
#include <string.h> // memcpy, memmove

/*
    Returns the number characters in a given string
    Null terminator not counted as part of the length

*/
size_t my_strlen(const char* str);

/*
    Copies a string from src location to dst array
    Handles overlap between src and dst 
*/
char* my_strcpy(char* dst, const char* src);

/*
    Appends src string to the end of the string pointed
    to by dst. Assumes both dst and src are valid null terminated
    strings and that dst is large enough to store the result
*/
char* my_strcat(char* dst, const char* src);

/*
    Compares two strings s1 and s2 character by character
    based on ASCII values. Returns:
        1 if s1 > s2
        -1 if s2 > s1
        0 if equal

    Assumes the two strings are valid and null terminated
*/
int my_strcmp(const char* s1, const char* s2);

/*
    Returns a pointer to the position of the first
    occurance of the given character. NULL if not found.
*/
char* my_strchr(const char* str, int c);

/*
    Returns a pointer to the located substring or NULL
    if not found
*/
char* my_strstr(const char* haystack, const char* needle);

#endif