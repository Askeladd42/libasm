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

global	ft_strdup
extern	ft_strlen
extern	ft_strcpy
extern	malloc

section	.text

ft_strdup:	push	r8
			mov		r8, rdi
			call	ft_strlen
