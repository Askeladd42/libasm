# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    ft_strdup.s                                        :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: plam <plam@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/09/28 15:43:20 by plam              #+#    #+#              #
#    Updated: 2020/09/28 15:43:21 by plam             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

section.data

	global: ft_strdup

section.text
	extern ft_strlen
	extern ft_strcpy
	extern malloc
	global _start

_start
	ft_strdup