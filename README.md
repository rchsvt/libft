*This activity has been created as part of the 42 curriculum by <rchavast>.*

# Libft

## Description

Libft is a custom C library developed as part of the 42 curriculum.

The goal of this project is to recreate essential functions from the standard C library, as well as implement additional utility functions. This project focuses on understanding low-level programming concepts such as memory management, string manipulation, and data structures.

The result is a static library (libft.a) that can be reused in future C projects.

## Library Overview

The library includes three categories of functions:

### Libc Functions

Reimplementation of standard functions:

- Character checks (ft_isalpha, ft_isdigit, ft_isalnum, etc.)
- Memory functions (ft_memset, ft_memcpy, ft_memmove, etc.)
- String functions (ft_strlen, ft_strncmp, ft_strchr, etc.)
- Conversion and allocation (ft_atoi, ft_calloc, ft_strdup)

### Additional Functions

Utility functions:

- ft_substr
- ft_strjoin
- ft_strtrim
- ft_split
- ft_itoa
- ft_strmapi
- ft_striteri
- ft_putchar_fd
- ft_putstr_fd
- ft_putendl_fd
- ft_putnbr_fd

### Linked List Functions

- ft_lstnew
- ft_lstadd_front
- ft_lstsize
- ft_lstlast
- ft_lstadd_back
- ft_lstdelone
- ft_lstclear
- ft_lstiter
- ft_lstmap

## Instructions

Compilation:

make

Cleaning:

make clean
make fclean
make re

## Usage

Include the header:

#include "libft.h"

Compile with:

cc -Wall -Wextra -Werror main.c libft.a

## Resources

- 42 Libft subject
- Unix manual pages (man)
- GNU C Library documentation

## AI Usage

AI was used as a learning assistant during this project.

It helped with:
- understanding concepts
- debugging issues
- improving code structure

All code was written and understood by the student.