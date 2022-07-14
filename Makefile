# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ashahin <ashahin@student.42wolfsburg.de    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/22 17:14:45 by ashahin           #+#    #+#              #
#    Updated: 2022/06/22 17:14:45 by ashahin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


# NAME = libft.a

# SRC = ft_isalnum.c ft_isprint.c ft_memcmp.c ft_putchar_fd.c ft_split.c \
# 					ft_strlcat.c ft_strncmp.c ft_substr.c ft_atoi.c ft_isalpha.c \
# 					ft_itoa.c ft_memcpy.c ft_putendl_fd.c ft_strchr.c ft_strlcpy.c \
# 					ft_strnstr.c ft_tolower.c ft_bzero.c ft_isascii.c \
# 					ft_memmove.c ft_putnbr_fd.c  ft_strdup.c ft_strlen.c  ft_strrchr.c \
# 					ft_toupper.c ft_calloc.c ft_isdigit.c ft_memchr.c ft_memset.c \
# 					ft_putstr_fd.c ft_strjoin.c ft_strmapi.c ft_strtrim.c ft_striteri.c

# SRC_BONUS = ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c \
# 					ft_lstdelone.c ft_lstiter.c ft_lstlast.c \
# 					ft_lstmap.c ft_lstnew.c ft_lstsize.c

# OBJ = ${SRC:.c=.o}

# # OBJ_BONUS = ${SRC_BONUS:.c=.o}

# CFLAGS = -Wall -Werror -Wextra

# COMPILE = gcc $(CFLAGS) -c

# LIB = ar rc $(NAME)

# RANLIB = ranlib $(NAME)

# REMOVE = rm -f

# all: $(NAME)

# $(NAME):
# 	@$(COMPILE) $(SRC)
# 	@$(LIB) $(OBJ)
# 	@$(RANLIB)

# # bonus:
# # 	@$(COMPILE) $(SRC_BONUS)
# # 	@$(LIB) $(OBJ_BONUS)
# # 	@$(RANLIB)

# clean:
# 	@$(REMOVE) $(OBJ)

# fclean: clean
# 	@$(REMOVE) $(NAME)

# re: fclean all

# so:
# 	gcc -fPIC -c $(SRC)
# 	gcc -shared -Wl,-soname,libft.so -o libft.so *.o
# .PHONY: all clean fclean re
###########################

NAME = libft.a
SRC = ft_isalnum.c ft_isprint.c ft_memcmp.c ft_putchar_fd.c ft_split.c \
					ft_strlcat.c ft_strncmp.c ft_substr.c ft_atoi.c ft_isalpha.c \
					ft_itoa.c ft_memcpy.c ft_putendl_fd.c ft_strchr.c ft_strlcpy.c \
					ft_strnstr.c ft_tolower.c ft_bzero.c ft_isascii.c \
					ft_memmove.c ft_putnbr_fd.c  ft_strdup.c ft_strlen.c  ft_strrchr.c \
					ft_toupper.c ft_calloc.c ft_isdigit.c ft_memchr.c ft_memset.c \
					ft_putstr_fd.c ft_strjoin.c ft_strmapi.c ft_strtrim.c ft_striteri.c

SRC_BONUS = ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c \
					ft_lstdelone.c ft_lstiter.c ft_lstlast.c \
					ft_lstmap.c ft_lstnew.c ft_lstsize.c

OBJ = $(SRC: .c = .o)

OBJ_BONUS = $(SRC_BONUS: .c = .o)

CC = gcc

CFLAGS = -Wall -Werror -Wextra

COMPILE = $(CC) $(CFLAGS) -c

LIB = ar rc $(NAME)

RANLIB = ranlib $(NAME)

all: $(NAME)

$(NAME): objects
	@$(LIB) $(OBJ)
	@$(RANLIB)

objects: $(SRC)
	@$(COMPILE) $(SRC)

bonus: bonusobjects
	@$(LIB) $(OBJ_BONUS)
	@$(RANLIB)

bonusobjects: $(SRC_BONUS)
	@$(COMPILE) $(SRC_BONUS)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re