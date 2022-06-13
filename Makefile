# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/23 16:20:24 by nburat-d          #+#    #+#              #
#    Updated: 2022/06/13 09:56:44 by nburat-d         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
EXEC = libft.a

SRCS = ft_atoi.c \
	ft_bzero.c \
	ft_calloc.c \
	ft_isalnum.c \
	ft_isalpha.c \
	ft_isascii.c \
	ft_isdigit.c \
	ft_isprint.c \
	ft_containchar.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_memcpy.c \
	ft_memset.c \
	ft_memmove.c \
	ft_strchr.c \
	ft_strdup.c \
	ft_strlcat.c \
	ft_strlcpy.c \
	ft_strncpy.c \
	ft_strlen.c \
	ft_tablen.c \
	ft_strcmp.c \
	ft_strncmp.c \
	ft_strnstr.c \
	ft_strrchr.c \
	ft_tolower.c \
	ft_toupper.c \
	ft_substr.c \
	ft_strjoin.c \
	ft_strtrim.c \
	ft_split.c \
	ft_itoa.c \
	ft_striteri.c \
	ft_strmapi.c \
	ft_putchar_fd.c \
	ft_putstr_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c \
	ft_putchar.c \
	ft_putstr.c \
	ft_putnbr.c \
	ft_lstrev.c \
	ft_lstnew.c \
	ft_lstadd_front.c \
	ft_lstsize.c \
	ft_lstlast.c \
	ft_lstadd_back.c \
	ft_lstdelone.c \
	ft_lstclear.c \
	ft_lstiter.c \
	ft_lstmap.c \
	ft_is_int.c \
	ft_dlstadd_back.c \
	ft_dlstadd_front.c \
	ft_dlstclear.c \
	ft_dlstlast.c \
	ft_dlstnew.c \
	ft_dlstsize.c \
	ft_dlstdelone.c \
	ft_dlstiter.c \

INCLUDES = ./

SRC_PATH = ./srcs/
OBJ_PATH = ./objs/

OBJS = $(addprefix $(OBJ_PATH), ${SRCS:.c=.o})
DEPENDS = $(addprefix $(OBJ_PATH), ${SRCS:.c=.d})

all : $(EXEC)

$(EXEC) : $(OBJS)
		ar rcs $(EXEC) $(OBJS)

$(OBJ_PATH)%.o : $(SRC_PATH)%.c
	mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -MD -c -o $@ $<  -I $(INCLUDES)

clean :
	rm -f $(OBJS)
	rm -f $(OBJ_PATH)$(DEPENDS)
	rm -rf $(OBJ_PATH)

fclean : clean
	rm -f $(EXEC)
	

re : fclean all

.PHONY : clean fclean re

-include $(DEPENDS)