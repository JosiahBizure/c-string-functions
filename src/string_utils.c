#include "string_utils.h"

size_t my_strlen(const char* str) {
    if (str == NULL) return SIZE_MAX;

    size_t len = 0;
    while (str[len] != '\0') {
        ++len;
    }

    return len;
}

char* my_strcpy(char* dst, const char* src) {
    // If nowhere to copy to or nothing to copy return NULL
    if (dst == NULL || src == NULL) return NULL;

    size_t len = my_strlen(src) + 1; // includes null terminator

    // If src and dst overlap a direct copy isn't possible, we'd
    // be reading and writing the same piece of memory, undefined behavior
    // Instead I'll create a temp buffer and read from the buffer
    if (src < dst + len && dst < src + len) {
        char* temp_buf = (char*)malloc(sizeof(char) * len);
        if (temp_buf == NULL) return NULL;
        
        memcpy(temp_buf, src, len);
        memcpy(dst, (const char*)temp_buf, len);

        free(temp_buf);
        return dst;
    } else {
        // Safe to copy directly
        memcpy(dst, src, len);
    }

    return dst;
}

char* my_strcat(char* dst, const char* src) {
    if (dst == NULL || src == NULL) return NULL;

    // We want to start writing directly on dst null terminator
    char* dst_end = dst+ my_strlen(dst);
    size_t src_len = my_strlen(src);

    memcpy(dst_end, src, src_len + 1); // +1 to copy null terminator

    return dst;
}

int my_strcmp(const char* s1, const char* s2) {
    if (s1 == NULL || s2 == NULL) return 404;

    while (*s1 == *s2 && *s1 != '\0' && *s2 != '\0') {
        ++s1;
        ++s2;
    }

    // if equal return 0
    if (*s1 == '\0' && *s2 == '\0') return 0;

    // if s1 > s2 return 1
    if (*s1 > *s2) return 1;

    return -1;
}

char* my_strchr(const char* str, int c) {
    size_t i = 0;
    while (str[i] != '\0') {
        if (str[i] == c) return (char*)&str[i];
        ++i;
    }

    // if c is the null terminator, return the index of the null terminator
    if (c == '\0') return (char*)&str[i];

    return NULL;
}

char* my_strstr(const char* haystack, const char* needle) {
    if (haystack == NULL || needle == NULL) return NULL;
    if (needle[0] == '\0') return (char*)haystack;

    for (size_t i = 0; haystack[i] != '\0'; ++i) {
        // if we encounter needle[0] in haystack, check if it's needle
        if (haystack[i] == needle[0]) {
            size_t sub_i = 0;
            while (needle[sub_i] != '\0' && needle[sub_i] == haystack[i + sub_i]) {
                ++sub_i;
            }
            if (needle[sub_i] == '\0') return (char*)&haystack[i];
        }
    }
    return NULL;
}