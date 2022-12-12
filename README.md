# Libft

## Description
This project is the very first project as a student at 42. It's about coding a C library.
It contains a lot of general purpose functions next programs will rely upon. 
I have recoded a few functions of the C standard library as well as some other utility functions that you will use during your whole cursus.

## skills

* Imperative programming
* Rigor
* Algorithms & AI

## introduction
C programming can be very tedious when one doesn’t have access to the highly useful standard functions.
This project is about understanding the way these functions work, implementing and learning to use them.
i created my own library. It will be helpful since i will use it in my next C projects in 42.
and i will expand my libft throughout the year.

# functions

## Part 1 - Libc functions

| Functions | Description |
| --- | --- |
| [ft_isalpha](https://github.com/Abdu898/libft/blob/main/ft_isalpha.c) | if character is a letter = returns 1 otherwise 0 |
| [ft_isdigit](https://github.com/Abdu898/libft/blob/main/ft_isdigit.c) | if character is a digit = returns 1 otherwise 0 |
|[ft_isalnum](https://github.com/Abdu898/libft/blob/main/ft_isalnum.c) | if character is a number or letter = retruns 1 otherwise 0 |
| [ft_isascii](https://github.com/Abdu898/libft/blob/main/ft_isascii.c) | if character is in the [ASCII](https://www.rapidtables.com/code/text/ascii-table.html) = returns 1 otherwise 0 |
| [ft_isprint](https://github.com/Abdu898/libft/blob/main/ft_isprint.c) | if character is in the [ASCII Printable](https://www.ascii-code.com/) = returns 1 otherwise 0 |
| [ft_toupper](https://github.com/Abdu898/libft/blob/main/ft_toupper.c) | if character in lowercase - returns uppercase character(character - 32), else returns character that is already uppercase |
| [ft_tolower](https://github.com/Abdu898/libft/blob/main/ft_tolower.c) | if character in uppercase - returns lowercase character(character - 32), else returns character that is already lowercase |
| [ft_strlen](https://github.com/Abdu898/libft/blob/main/ft_strlen.c) | returns lenght of a null - terminated [string](https://www.programiz.com/c-programming/c-strings) |
| [ft_memset](https://github.com/Abdu898/libft/blob/main/ft_memset.c) | fills n bytes of memory with byte c. returns essentially the same [pointer](https://www.programiz.com/c-programming/c-pointers) that it received as input |
| [ft_bzero](https://github.com/Abdu898/libft/blob/main/ft_bzero.c) | fills n bytes of memory with null-terminaters |
| [ft_memcpy](https://github.com/Abdu898/libft/blob/main/ft_memcpy.c) | copies n bytes from src to dest. memory areas must not overlap |
| [ft_memmove](https://github.com/Abdu898/libft/blob/main/ft_memmove.c) | copies the values of num bytes from the location pointed by source to the memory block pointed by destination memory areas may overlap |
| [ft_strlcpy](https://github.com/Abdu898/libft/blob/main/ft_strlcpy.c) | copies from string src to buffer dst no more than size - 1 characters if size> 0 and characters are written, the dst string is guaranteed to be null terminated |
| [ft_strlcat](https://github.com/Abdu898/libft/blob/main/ft_strlcat.c) | appends the NUL-terminated string src to the end of dst. It will append at most size - ft_strlen(dst) - 1 bytes, NULL-terminating the result |
| [ft_strchr](https://github.com/Abdu898/libft/blob/main/ft_strchr.c) | searches for the first occurrence of the character c in the string s. the search area is limited by strlen + 1 (\ 0 is treated as part of a string) |
| [ft_strrchr](https://github.com/Abdu898/libft/blob/main/ft_strrchr.c) | searches for the last occurrence of the character c in the string s. the search area is limited by strlen + 1(\0 is treated as part of a string) |
| [ft_strncmp](https://github.com/Abdu898/libft/blob/main/ft_strncmp.c) | compares at most the first n characters of two strings. returns 0 if identical. returns * s1 - * s2 if distinct characters are encountered |
| [ft_memchr](https://github.com/Abdu898/libft/blob/main/ft_memchr.c) | searches for the first occurrence of the character c in the memory area s, limited to n bytes returns a pointer to the searched for byte, or NULL if not found |
| [ft_memcmp](https://github.com/Abdu898/libft/blob/main/ft_memcmp.c) | compares n bytes of memory chunks. returns 0 if the parcels are identical. returns 1 if different bytes and * s1> * s2 are encountered. otherwise -1 |
| [ft_strnstr](https://github.com/Abdu898/libft/blob/main/ft_strnstr.c) | searches for the first occurrence of the substring little in the string big. search for big is limited to len number of characters. returns a pointer for the found entry / or NULL. if little is an empty string, returns big |
| [ft_atoi](https://github.com/Abdu898/libft/blob/main/ft_atoi.c) | parses string - str interpreting its content as an integral number, which is returned as a value of type int |
| [ft_calloc](https://github.com/Abdu898/libft/blob/main/ft_calloc.c) | returns a pointer to the NULL-terminated memory area (for nmemb objects of size) |
| [ft_strdup](https://github.com/Abdu898/libft/blob/main/ft_strdup.c) | returns a pointer to a null-terminated byte string, which is a duplicate of the string pointed to by str1 |

## Part 2 Additional Functions

| Functions | Description |
| --- | --- |
| [ft_putchar_fd](https://github.com/Abdu898/libft/blob/main/ft_putchar_fd.c) | writes a character to the [File descriptor](https://www.geeksforgeeks.org/input-output-system-calls-c-create-open-close-read-write/#:~:text=What%20is%20the%20File%20Descriptor,pointers%20to%20file%20table%20entries.) |
| [ft_putstr_fd](https://github.com/Abdu898/libft/blob/main/ft_putstr_fd.c) | write a string to the File descriptor |
| [ft_putendl_fd](https://github.com/Abdu898/libft/blob/main/ft_putendl_fd.c) | Outputs the string ’s’ to the given file descriptor, followed by \n |
| [ft_putnbr_fd](https://github.com/Abdu898/libft/blob/main/ft_putnbr_fd.c) | outputs a number to the output specified by the file descriptor |
| [ft_substr](https://github.com/Abdu898/libft/blob/main/ft_substr.c) | returns a pointer to the truncated substring of string s. The substring starts at position s + start and has a maximum length maxlen.
| [ft_strjoin](https://github.com/Abdu898/libft/blob/main/ft_strjoin.c) | returns a pointer to the masked concatenation of strings s1 and s2 |
| [ft_strtrim](https://github.com/Abdu898/libft/blob/main/ft_strtrim.c) | returns a pointer to the truncated string the content of the newline is the remainder of s1, trimmed from the beginning and from the end. throw out from the beginning and from the end the characters contained in the set line |
| [ft_itoa](https://github.com/Abdu898/libft/blob/main/ft_itoa.c) | converts an integer value to a null-terminated string, returns a masked string with the number n |
| [ft_split](https://github.com/Abdu898/libft/blob/main/ft_split.c) | returns a pointer to a masked array of strings obtained by breaking s by separator c |
| [ft_strmapi](https://github.com/Abdu898/libft/blob/main/ft_strmapi.c) | applies the function ’f’ to each character of the string ’s’ to create a new string (with malloc(3)) resulting from successive applications of ’f’ |
| [ft_striteri](https://github.com/Abdu898/libft/blob/main/ft_striteri.c) | applies the function f to each character of the string passed as argument, and passing its index as first argument. Each character is passed by address to f to be modified if necessary |

## Bonus Functions

| Functions | Description |
| --- | --- |
| [ft_lstnew](https://github.com/Abdu898/libft/blob/main/ft_lstnew.c) | allocates (with malloc(3)) and returns a “fresh” link. The variables content and content_size of the new link are initialized by copy of the parameters of the function. If the parameter content is nul, the variable content is initialized to NULL and the variable content_size is initialized to 0 even if the parameter content_size isn’t. The variable next is initialized to NULL. If the allocation fails, the function returns NULL |
| [ft_lstadd_front](https://github.com/Abdu898/libft/blob/main/ft_lstadd_front.c) | adds the element new at the beginning of the list lst |
| [ft_lstsize](https://github.com/Abdu898/libft/blob/main/ft_lstsize.c) | returns the number of entries for list, list, mlist objects |
| [ft_lstlast](https://github.com/Abdu898/libft/blob/main/ft_lstlast.c) |  returns the list pointed to last element |
| [ft_lstadd_back](https://github.com/Abdu898/libft/blob/main/ft_lstadd_back.c) | adds the element new at the end of the list lst |
| [ft_lstdelone](https://github.com/Abdu898/libft/blob/main/ft_lstdelone.c) | takes as a parameter a link's pointer address and frees the memory of the link's content using the function del given as a parameter, then frees the link's memory using free. The memory of next must not be freed under any circumstance. Finally, the pointer to the link that was just freed must be set to NULL |
| [ft_lstclear](https://github.com/Abdu898/libft/blob/main/ft_lstclear.c) | Deletes and frees the given element and every successor of that element, using the function ’del’ and free. Finally, the pointer to the list must be set to NULL.|
| [ft_lstiter](https://github.com/Abdu898/libft/blob/main/ft_lstiter.c) | iterates through a list and applies the function f to each link in the list |
| [ft_lstmap](https://github.com/Abdu898/libft/blob/main/ft_lstmap.c) | iterates a list lst and applies the function f to each link to create a “fresh” list (using malloc resulting from the successive applications of f. If the allocation fails, the function returns NULL |