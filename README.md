# Libft - 1337/42 school project
My implementation of some of the Standard C Library functions including some additional ones.

## What is libft?
**Libft** is an individual project at **42** that requires us to re-create some standard **C** library functions including some additional ones that can be used later on, and will be a useful tool for the cursus.

## What's in it?

In this library, there are 3 sections :

1.  **LIBC FUNCTIONS :** Some of the standard C functions
2.  **ADDITIONAL FUNCTIONS :** Functions 42 deems will be useful for later projects
3.  **BONUS FUCNTIONS :** Functions 42 deems will be useful for linked list manipulation

Libc functions | Additional functions | Bonus Functions |
:------------: | :------------------: | :-------------: |
| isalpha      |  ft_substr           | ft_lstnew       |
| isdigit      |  ft_strjoin          | ft_lstadd_front |
| isalnum      |  ft_strtrim          | ft_lstsize      |
| isascii      |  ft_split            | ft_lstlast      |
| isprint      |  ft_itoa             | ft_lstadd_back  |
| strlen       |  ft_strmapi          | ft_lstdelone    |
| memset       |  ft_striteri         | ft_lstclear     |
| bzero        |  ft_putchar_fd       | ft_lstiter      |
| memcpy       |  ft_putstr_fd        | ft_lstmap       |
| memmove      |  ft_putendl_fd       | 
| strlcpy      |  ft_putnbr_fd        |
| strlcat      | 
| toupper      |
| tolower      |
| strchr       |
| strrchr      |
| strncmp      |
| memchr       |
| memcmp       |
| strnstr      |
| atoi         |
| calloc       |
| strdup       |

Notes:

- Most of the the files and function names are namespaced with an **ft** in front. It stands for 42's norm.
- In this project, we must work with Makefile.

## How does it work?

The goal is to create a library called libft.a from the source files so I can later use that library from other projects at 42.

To create that library, after downloading/cloning this project, **cd** into the project, copy all the files from the sub folders to the root directory and finally, call make:

```
git clone https://github.com/junik1337/42cursus_Libft
cd libft
make 
make bonus (for bonus part)
```

You should see a *libft.a* file and some object files (.o).


- Now to clean up (removing the .o files and the .c files from the root), call `make clean`
- If you added something to the files, you can use `make re` to delete the `*.o` files and recompile the library.

## Other 42's projects

This is a list of my projects that use Libft extensively:

* [Get_next_line](https://github.com/junik1337/42cursus_get_next_line)
* [Ft_printf](https://github.com/junik1337/42cursus_ft_printf)

![Made with c](https://forthebadge.com/images/badges/made-with-c.svg) 
![Followers](https://img.shields.io/github/followers/junik1337?style=for-the-badge) 
![Code size](https://img.shields.io/github/languages/code-size/junik1337/42cursus_philosophers?style=for-the-badge) 
![Language %](https://img.shields.io/github/languages/top/junik1337/42cursus_philosophers?style=for-the-badge) 
![Time](https://img.shields.io/date/1656580778?style=for-the-badge)
<a href="https://profile.intra.42.fr/users/ayassir"><img src="https://img.shields.io/badge/School-Born2code-2ea44f?style=for-the-badge&logo=42" alt="School - Born2code"></a>

