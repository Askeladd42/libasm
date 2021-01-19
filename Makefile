# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: plam <plam@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/09/28 15:22:27 by plam              #+#    #+#              #
#    Updated: 2021/01/19 13:42:06 by plam             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC			=	ft_strlen.s\
				ft_strcpy.s\
				ft_strcmp.s\
				ft_write.s\
				ft_read.s\
				ft_strdup.s\

NAME		= 	libasm.a

OBJS		= 	${SRC:.s=.o}

ASM			= 	nasm

FLAGS		= 	-felf64

RM			= 	/bin/rm -f

all:		$(NAME)

$(NAME):	$(OBJS)
			$(ASM) $(FLAGS) $(OBJS) $(NAME)

ex:
			clang main.c $(NAME) -o test && ./test

clean:
			$(RM) $(NAME)

fclean:		clean

re:			fclean all

.PHONY:		all clean fclean re ex bonus