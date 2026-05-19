<h1 align="center">📚 Libft</h1>

<p align="center">
  Custom C library developed as part of the 42 curriculum.
</p>

---

## 📖 About

Libft is a foundational project from the 42 curriculum.

The objective is to recreate essential functions from the standard C library while learning:
- memory management
- string manipulation
- pointers
- data structures
- low-level programming concepts

The final result is a reusable static library:

```bash
libft.a
```

---

## 🚀 Features

### Libc Functions
Reimplementation of standard C library functions.

Examples:
- `ft_strlen`
- `ft_memcpy`
- `ft_memmove`
- `ft_strchr`
- `ft_strdup`
- `ft_atoi`

---

### Additional Functions

Utility functions for string manipulation and memory handling.

Examples:
- `ft_substr`
- `ft_strjoin`
- `ft_split`
- `ft_strtrim`
- `ft_itoa`

---

### Linked List Functions

Implementation of linked list utilities.

Examples:
- `ft_lstnew`
- `ft_lstadd_back`
- `ft_lstclear`
- `ft_lstmap`

---

## 🛠️ Compilation

Compile the library:

```bash
make
```

Clean object files:

```bash
make clean
```

Remove object files and library:

```bash
make fclean
```

Recompile everything:

```bash
make re
```

---

## 💻 Usage

Include the header:

```c
#include "libft.h"
```

Compile with:

```bash
cc -Wall -Wextra -Werror main.c libft.a
```

---

## 📂 Project Structure

```txt
libft/
├── Makefile
├── libft.h
├── ft_*.c
└── libft.a
```

---

## 🎯 Skills Learned

- C programming
- Memory management
- Algorithmic thinking
- Defensive programming
- Code organization
- Makefile usage

---

<p align="center">
  Built at <strong>42 Paris</strong>
</p>
