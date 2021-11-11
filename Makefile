# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: acmaghou <muteallfocus7@gmail.com>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/03 11:25:35 by acmaghou          #+#    #+#              #
#    Updated: 2021/11/11 18:48:26 by acmaghou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    = libft.a
SRCS    =  ft_isdigit.c ft_memset.c ft_isprint.c ft_strlcat.c\
			ft_strlcpy.c ft_tolower.c ft_bzero.c ft_strlen.c\
			ft_toupper.c ft_memchr.c ft_isalnum.c ft_strncmp.c ft_isalpha.c ft_memcpy.c ft_strchr.c\
			ft_strnstr.c ft_isascii.c ft_memmove.c ft_strrchr.c\
			ft_strdup.c ft_calloc.c ft_substr.c ft_strjoin.c\
			ft_strtrim.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c\
			ft_putnbr_fd.c ft_atoi.c ft_memcmp.c ft_split.c ft_itoa.c\
			ft_strmapi.c ft_strtrim.c ft_striteri.c
BONUS_SRCS	= ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c\
				ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c 
#ft_lstmap.c

OBJS    =	${SRCS:.c=.o}

BONUS_OBJS	=	$(BONUS_SRCS:.c=.o)

CC = gcc

FLAGS = -Wall -Wextra -Werror

.c.o:
	$(CC) $(FLAGS) -c $< -o ${<:.c=.o}

$(NAME):	$(OBJS)
	ar rcs	$(NAME)	$(OBJS)

main: all bonus
	gcc main.c $(NAME)
	clear
	./a.out

all:    ${NAME}

bonus:	$(OBJS) $(BONUS_OBJS)
	ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

clean:
	rm -rf $(OBJS) $(BONUS_OBJS)

fclean:	clean
	rm -rf ${NAME}

re:	fclean all
