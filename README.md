# Libft - 42 Lisboa
Standard C Library rebuilt from scratch. Focus on strict memory management, pointers, and data structures.

![Language](https://img.shields.io/badge/Language-C-blue)
![School](https://img.shields.io/badge/School-42-black)
![Score](https://img.shields.io/badge/Score-125%2F100-brightgreen)

## 🗣️ About

This project is my first custom C library, built from scratch as part of the 42 Lisboa curriculum. The goal was to recreate essential functions from the C standard library (`libc`) to understand low-level memory management, pointers, and data structures.

This library is rigorously tested, memory-leak free, and optimized for performance. It serves as the foundation for all my future C projects at 42.

## 🛠️ Features

### Memory Manipulation
* `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`...
* `ft_calloc` (Manual allocation with overflow protection)

### String Manipulation
* `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strncmp`...
* `ft_split` 
* `ft_strjoin`, `ft_strtrim`, `ft_substr`

### Linked Lists (Bonus)
* Full suite of list manipulation functions: `ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, `ft_lstlast`, `ft_lstadd_back`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`.

## 🚀 How to use

**1. Clone the repository:**
```bash
git clone https://github.com/joaoo-pt/Libft.git
cd libft
```

**2. Compile the library:**
The Makefile handles compilation efficiently.
```bash
make        # Compiles libft.a
make clean  # Removes object files
make fclean # Removes object files and the library
make re     # Recompiles everything
``` 

**3. Use in your project:**
Include the header and link the library during compilation.
```bash
#include "libft.h"

int main(void)
{
    ft_putstr_fd("Hello 42!", 1);
    return (0);
}
```
Compile with: gcc main.c libft.a

## 🧪 Testing

### This project passed the Moulinette with 125/100 (Bonus included).
