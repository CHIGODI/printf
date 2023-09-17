# Printf Project

## Overview

This directory contains the source code and related files for a C programming project focused on creating a custom `printf` function. The project aims to replicate the functionality of the standard C library's `printf` function while implementing various custom features.

## Project Details

- **Project Type**: Group Project
- **Authors**: Julien Barbier, co-founder & CEO
- **Team**: Prudence Wambui, Antony Chigodi
- **Project Start**: September 15, 2023, 6:00 AM

## Requirements

### General

- Allowed Editors: vi, vim, emacs
- Code will be compiled on Ubuntu 20.04 LTS using `gcc` with specific compiler options.
- Files should end with a newline character.
- A `README.md` file is mandatory.
- Code should follow the Betty style guidelines.
- Global variables are not allowed.
- No more than 5 functions per file.
- Prototypes of all functions should be included in `main.h`.
- Header files should be include guarded.
- The `_putchar` function will not be provided.

### Compilation

- Code will be compiled using the following command:
-$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c

## Tasks
1. Implementing basic format specifiers (`c`, `s`, `%`) in the `_printf` function.
2. Handling format specifiers for integers (`d`, `i`).
3. Implementing a custom conversion specifier (`b`) for binary representation.
4. Handling format specifiers for unsigned integers (`u`, `o`, `x`, `X`).
5. Handling non-printable characters using the custom specifier `S`.
6. Implementing format specifier for pointers (`p`).
7. Handling flag characters (`+`, `space`, `#`) for non-custom specifiers.
8. Implementing length modifiers (`l`, `h`) for non-custom specifiers.
9. Handling field width for non-custom specifiers.
10. Implementing precision for non-custom specifiers.
11. Handling the `0` flag character for non-custom specifiers.
12. Handling the `-` flag character for non-custom specifiers.
13. Implementing a custom conversion specifier `r` to print reversed strings.
14. Implementing a custom conversion specifier `R` to print rot13'ed strings.
15. Combining all the above options.
