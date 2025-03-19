# Libft

Libft is a custom C library developed as part of the 42 curriculum. It implements a set of useful functions that are commonly used in C programming, including string manipulation, memory management, linked lists, and more.

## Features
- Standard C library functions reimplemented from scratch
- Additional utility functions for strings and memory
- Linked list operations for easier data structure handling

## Installation
### Clone the repository
```sh
git clone https://github.com/yourusername/libft.git
cd libft
```

### Build the library
```sh
make
```
This will generate a `libft.a` file, which can be linked to other projects.

## Usage
Include the library in your project:
```c
#include "libft.h"
```
Compile your program with `libft.a`:
```sh
gcc myprogram.c -L. -lft -o myprogram
```

## Functions
Libft provides reimplementations of several standard functions and additional utilities, such as:
- `ft_strlen` - Get the length of a string
- `ft_strcpy` - Copy a string
- `ft_strdup` - Duplicate a string
- `ft_memcpy` - Copy memory area
- `ft_memset` - Fill memory with a constant byte
- `ft_lstnew` - Create a new linked list node
- `ft_lstadd_front` - Add an element at the beginning of a linked list

## Resources
- [42's Libft Subject](https://cdn.intra.42.fr/pdf/pdf/28533/en.subject.pdf) - Official project specifications.
- [Libft Reference](https://github.com/yourusername/libft) - Repository with implementation and documentation.

