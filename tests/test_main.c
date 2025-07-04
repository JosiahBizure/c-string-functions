#include "string_utils.h"

size_t my_strlen(const char* str) {
    if (str == NULL) return -1;

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
        memcpy(dst, temp_buf, len);

        free(temp_buf);
        return dst;
    } else {
        // Safe to copy directly
        memcpy(dst, src, len);
    }

    return dst;
}

char* my_strcat(char* dst, const char* src) {

}