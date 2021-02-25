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
			push	r8
			call	ft_strlen
			pop		r8
			inc		rax
			mov		rdi, rax
			push	r8
			call	malloc
			pop		r8
			mov		rsi, r8
			mov		rdi, rax
			push	r8
			call	ft_strcpy
			pop		r8
			mov		rax, rdi
			mov		rdi, r8
			pop		r8
			ret
