# c-string-functions

Reimplementation of standard C string functions for learning and reinforcement. This is designed to improve my understanding of pointers, null-terminated strings, and low-level memory manipulation in C.
This repo does not rely on string.h -- all string behavior is manually implemented.

## Implemented Functions

- `size_t my_strlen(const char* str)`
- `char* my_strcpy(char* dest, const char* src)`
- `char* my_strcat(char* dest, const char* src)`
- `int my_strcmp(const char* s1, const char* s2)`
- `char* my_strchr(const char* str, int c)`
- `char* my_strstr(const char* haystack, const char* needle)`
- `char* my_strtok(char* str, const char* delim)`

## File Structure

c-string-functions/
├── src/
│   ├── string_utils.c      # Implementations
│   └── string_utils.h      # Function declarations
├── tests/
│   └── test_main.c         # Simple tests
├── Makefile                # TODO: I'd like to learn Make
└── README.md


## Build & Run

```bash
gcc -o test tests/test_main.c src/string_utils.c
./test

