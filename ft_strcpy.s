# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_strcpy.s                                        :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: plam <plam@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/09/28 15:43:17 by plam              #+#    #+#              #
#    Updated: 2020/09/28 15:43:17 by plam             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

section.data

	global: _ft_strcpy

section.text
	global _start

_start
	char	*ft_strcpy(char *dst,const char *src)
	