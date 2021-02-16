# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: plam <plam@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/09/28 15:22:27 by plam              #+#    #+#              #
#    Updated: 2021/02/16 16:47:44 by plam             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC			=	ft_strlen.s ft_read.s\
				ft_strcpy.s ft_write.s\
				ft_strcmp.s ft_strdup.s\

NAME		=	libasm.a

OBJS		=	${SRC:.s=.o}

AS			=	nasm

AFLAGS		=	-felf64

RM			=	/bin/rm -f

CC			=	/bin/clang

CFLAGS		=	-L -lasm

all:		$(CREATE)
			$(NAME)

$(CREATE):

$(NAME):	$(OBJS)
			ar rcs $(NAME) $(OBJS)

test:
			$(CC) $(CFLAGS) main.c $(NAME) -I libasm.h -o test && ./test

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)
			$(RM) test

re:			fclean all

.PHONY:		all clean fclean re test bonus