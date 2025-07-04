# c-string-functions

A personal reimplementation of common C string manipulation functions to reinforce understanding of pointers, memory management, and C idioms. 
Written without `strcpy`, `strcat`, etc..


## Implemented Functions

- `my_strlen` – returns the number of characters in a string
- `my_strcpy` – copies a string from `src` to `dst`, handling memory overlap
- `my_strcat` – appends `src` to `dst` (assumes enough space in `dst`)
- `my_strcmp` – compares two strings lexicographically
- `my_strchr` – finds the first occurrence of a character in a string
- `my_strstr` – finds the first occurrence of a substring in a string

## File Structure

c-string-functions/
├── src/
│   ├── string_utils.c      # Implementations
│   └── string_utils.h      # Function declarations
├── tests/
│   └── test_main.c         # Simple tests
└── README.md


## Usage

Compile test code with:

```sh
gcc -Isrc -o test_string_utils src/string_utils.c tests/test_main.c
./test_string_utils