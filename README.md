# _printf Project

This project is a custom implementation of the `printf` function in C, adhering to the Betty coding style and the constraints of the GNU89 standard. It supports basic format specifiers for characters, strings and integers.

## Functionality

The `_printf` function supports the following conversion specifiers:
- `%c`: Print a character.
- `%s`: Print a string.
- `%d` or `%i`: Prints a signed decimal integer.
- `%%`: Prints a percent sign.

## Files

- `main.h`: Header file containing prototypes and include guards.
- `_printf.c`: Implementation of the `_printf` function.
- `_putchar.c`: Implementation of the `_putchar` function.
- `print_numbers.c`: Implementation of functions for printing numbers.
- `print_functions.c`: Implementation of functions for printing characters.
- `README.md`: Description of the project.
- `_printf.3`: File of the man for the function `_printf`. 

## Compilation

To install the function, just clone the repository:

git clone https://github.com/lowbacc/holbertonschool-printf.git

and compile the _printf function with this command:

gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c -o printf

this command will compile all .c files in the current into an executable named printf.

## Requirements

- GCC compiler (version 4.8.4 or later)
- Ubuntu 20.04 LTS or similar Unix-like operating

## Man page :page_facing_up: :

To access the Man please follow these steps:
### Use this command : 
```
sudo cp _printf.3 /usr/share/man/man3/`
```
### Then use 
```
sudo mandb
```
### You can then open the man with :smile:
```
man _printf
```

## AUTHORS

- [@Matthis SKALSKI] (https://github.com/lowbacc)
- [@Lucas NIEL] (https://github.com/HSHKZ)
- [@Raphael MELNIQUE] (https://github.com/Raphaelnpl)
