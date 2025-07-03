#ifndef STRING_UTILS_H
#define STRING_UTILS_H

#include <stdlib.h> // size_t

/*
    Returns the number characters in a given string
    Null terminator not counted as part of the length

*/
size_t my_strlen(const char* str);

/*
    Copies a string from src location to dst array
    Like the real strcpy, no bounds checking is provided
*/
char* my_strcpy(char* dst, const char* src);

/*
    Appends src string to the end of the string pointed
    to by dst.
*/
char* my_strcat(char* dst, const char* src);

/*
    Compares two strings s1 and s2 character by character
    based on ASCII values. Returns:
        1 if s1 > s2
        -1 if s2 > s1
        0 if equal
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

/*
    Tokenizes the given string by breaking it into
    a series of smaller strings based on the
    given delimeter. (simplified version)
*/
char* my_strtok(char* str, const char* delim);

#endif