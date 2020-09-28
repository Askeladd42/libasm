# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: plam <plam@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/09/28 15:22:27 by plam              #+#    #+#              #
#    Updated: 2020/09/28 15:40:14 by plam             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		=	

NAME		= 	libasm.a

RM			= 	/bin/rm -f

LIBFT		= 	srcs/libft

MAKE		= 	/usr/bin/make

all:		$(NAME)

$(NAME):	$(OBJS)
			@cd $(LIBFT) && $(MAKE) re && $(MAKE) bonus && $(MAKE) clean
			$(CC) $(FLAGS) $(OBJS) $(LIBS) -o $(NAME)

%.o:		%.c
			$(CC) $(FLAGS) -o $@
	
clean:
			$(RM)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re bonus