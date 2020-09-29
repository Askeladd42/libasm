# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: plam <plam@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/09/28 15:22:27 by plam              #+#    #+#              #
#    Updated: 2020/09/29 11:02:55 by plam             ###   ########.fr        #
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

FLAGS		= 	-f elf64

RM			= 	/bin/rm -f

all:		$(NAME)

$(NAME):	$(OBJS)
			$(ASM) $(FLAGS) $(OBJS) $(NAME)
	
clean:
			$(RM) $(NAME)

fclean:		clean

re:			fclean all

.PHONY:		all clean fclean re bonus