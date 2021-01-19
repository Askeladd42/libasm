# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: plam <plam@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/09/28 15:22:27 by plam              #+#    #+#              #
#    Updated: 2021/01/19 14:43:28 by plam             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC			=	ft_strlen.s ft_read.s\
				ft_strcpy.s ft_write.s\
				ft_strcmp.s ft_strdup.s\

NAME		= 	libasm.a

OBJS		= 	${SRC:.s=.o}

ASM			= 	nasm

FLAGS		= 	-felf64

RM			= 	/bin/rm -f

CC			= 	/bin/clang

CFLAGS		= 	-Wall -Wextra -Werror

all:		$(NAME)

$(NAME):	$(OBJS)
			$(ASM) $(FLAGS) $(OBJS) $(NAME)

test:
			$(CC) $(CFLAGS) main.c $(NAME) -o test && ./test

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re test bonus