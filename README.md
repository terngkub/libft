# libft
École 42 assignment in C - my C functions library

### About the project
* This is an individual project at [École 42](https://42.fr).
* The project objective is to create my own library in C language to use in later school project.
* The first part is to implement libc function
  * Memory
    * memset
    * bzero
    * memcpy
    * memccpy
    * memmove
    * memchr
    * memcmp
  * String
    * strlen
    * strdup
    * strcpy
    * strncpy
    * strcat
    * strncat
    * strlcat
    * strchr
    * strrchr
    * strstr
    * strnstr
    * strcmp
    * strncmp
  * Checking
    * isalpha
    * isdigit
    * isalnum
    * isascii
    * isprint
  * Other
    * atoi
    * toupper
    * tolower
* The second part is to create useful functions
  * Memory
    * ft_memalloc - allocate memmory and initialize it with 0
    * ft_memdel - free memory
  * String
    * ft_strnew - allocate memory for string
    * ft_strdel - free string
    * ft_strclr - set every character of the string to 0
    * ft_striter - applies function to each character of the string
    * ft_striiter - applies function to each character of the string with a character index as argument
    * ft_strmap - applies function to each character of the string and return the result to new string
    * ft_strmapi - applies function to each character of the string with a character index as argument and return the result to new string
    * ft_strequ - compare string
    * ft_strnequ - compare string by n characters
    * ft_strsub - create substring
    * ft_strjoin - allocate a new string resulting from joining 2 string
    * ft_strtrim - trim begining and ending whitespace
    * ft_strsplit - split a string into an array
  * Input
    * ft_putchar - output a character to stdout
    * ft_putstr - output a string to stdout
    * ft_putendl - output a string to stdout with '\n'
    * ft_putnbr - output an integer to stdout
    * ft_putchar_fd - output a character to fd
    * ft_putstr_fd - output a string to fd
    * ft_putendl_fd - output a string to fd with '\n'
    * ft_putnbr_fd - output an integer to fd
  * Other
    * ft_itoa - create string from numbers
* Bonus Part - linked list
  * ft_lstnew - create new node
  * ft_lstdelone - delete a node
  * ft_lstdel - delete entire list
  * ft_lstadd - add a node to the front of the list
  * ft_lstiter - applies function to each node of the list
  * ft_lstmap - applies function to each node of the list and create a new list resulting from the funcation applications
* I also add [get_next_line](https://github.com/terngkub/get_next_line) and [ft_printf](https://github.com/terngkub/ft_printf) to this library.

### How to use the library
* Run Makefile to create the library. This will create libft.a.
  ```
  make
  ```
* Include the library header into files that use it. Change the path to the header file.
  ```
  #include "libft/libft.h"
  ```
* Refer to the library when comply.
  ```
  gcc -L libft -lft main.c
  ```
