#include <stdio.h>
#include <stdlib.h>
#include "string_utils.h"

int main() {
    char buf1[100] = "Hello";
    char buf2[100] = "";
    const char* src = "World";

    // my_strlen
    printf("my_strlen(\"Hello\") = %zu\n", my_strlen("Hello"));
    printf("my_strlen(\"\") = %zu\n", my_strlen(""));
    printf("my_strlen(NULL) = %zu\n", my_strlen(NULL));

    // my_strcpy
    my_strcpy(buf2, src);
    printf("After my_strcpy(buf2, \"World\"): %s\n", buf2);

    // my_strcat
    my_strcat(buf1, " World");
    printf("After my_strcat(buf1, \" World\"): %s\n", buf1);

    // my_strcmp
    printf("my_strcmp(\"abc\", \"abc\") = %d\n", my_strcmp("abc", "abc"));
    printf("my_strcmp(\"abc\", \"abcd\") = %d\n", my_strcmp("abc", "abcd"));
    printf("my_strcmp(\"abcd\", \"abc\") = %d\n", my_strcmp("abcd", "abc"));

    // my_strchr
    char* found = my_strchr("abcdef", 'd');
    if (found)
        printf("my_strchr(\"abcdef\", 'd') = %s\n", found);
    else
        printf("my_strchr(\"abcdef\", 'd') = NULL\n");

    // my_strstr
    char* substr = my_strstr("This is a test string", "test");
    if (substr)
        printf("my_strstr(\"This is a test string\", \"test\") = %s\n", substr);
    else
        printf("my_strstr(\"This is a test string\", \"test\") = NULL\n");

    return 0;
}